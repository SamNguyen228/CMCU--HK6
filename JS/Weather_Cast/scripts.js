const apiKey = '58dae377083df906dfaff20ba8bcb92a';

    const searchForm = document.getElementById('searchForm');
    const cityInput = document.getElementById('cityInput');
    const weatherInfo = document.getElementById('weatherInfo');
    const errorMessage = document.getElementById('errorMessage');

    const cityNameEl = document.getElementById('cityName');
    const weatherDescriptionEl = document.getElementById('weatherDescription');
    const temperatureEl = document.getElementById('temperature');
    const feelsLikeEl = document.getElementById('feelsLike');
    const humidityEl = document.getElementById('humidity');
    const windSpeedEl = document.getElementById('windSpeed');
    const pressureEl = document.getElementById('pressure');
    const weatherIconEl = document.getElementById('weatherIcon');

    function getWeatherIconUrl(iconCode) {
      return `https://openweathermap.org/img/wn/${iconCode}@2x.png`;
    }

    searchForm.addEventListener('submit', async (e) => {
      e.preventDefault();
      const city = cityInput.value.trim();
      if (!city) return;

      weatherInfo.classList.remove('visible');
      errorMessage.textContent = '';
      errorMessage.style.display = 'none';

      try {
        const response = await fetch(
          `https://api.openweathermap.org/data/2.5/weather?q=${encodeURIComponent(
            city
          )}&appid=${apiKey}&units=metric`
        );

        if (!response.ok) {
          throw new Error('City not found');
        }

        const data = await response.json();

        cityNameEl.textContent = `${data.name}, ${data.sys.country}`;
        weatherDescriptionEl.textContent = data.weather[0].description;
        temperatureEl.textContent = `${Math.round(data.main.temp)}°C`;
        feelsLikeEl.textContent = `Feels like ${Math.round(data.main.feels_like)}°C`;
        humidityEl.textContent = `${data.main.humidity}%`;
        windSpeedEl.textContent = `${data.wind.speed} m/s`;
        pressureEl.textContent = `${data.main.pressure} hPa`;
        weatherIconEl.src = getWeatherIconUrl(data.weather[0].icon);
        weatherIconEl.alt = `Weather icon showing ${data.weather[0].description} condition`;

        weatherInfo.classList.add('visible');
      } catch (error) {
        errorMessage.textContent = error.message;
        errorMessage.style.display = 'block';
        weatherInfo.classList.remove('visible');
      }
    });