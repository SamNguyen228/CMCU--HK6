import HomeScreen from "./HomeScreen";
import DetailScreen from "./DetailScreen";
import HomeMovie from "./HomeMovie";
import DetailMovie from "./DetailMovie";
import CreateMovie from "./CreateMovie";
import { createNativeStackNavigator } from "@react-navigation/native-stack";
import { NavigationContainer } from "@react-navigation/native";
const Stack = createNativeStackNavigator();

function RootStack() {
  return (
  <NavigationContainer>
    <Stack.Navigator initialRouteName="Home" screenOptions={{ headerStyle: { backgroundColor: '#6200ee',  }, headerTintColor: '#ccc', headerTitleStyle: { fontWeight: 'light' } }}>
      <Stack.Screen name="Home" component={HomeMovie} />
      <Stack.Screen name="Detail" component={DetailMovie} />
      <Stack.Screen name="Create" component={CreateMovie} />
    </Stack.Navigator>
  </NavigationContainer>
  );
}

export default function App() {
  // return (
  //   <Stack.Navigator>
  //     <Stack.Screen
  //       name="Home"
  //       component={HomeScreen}   
             
  //     />

  //     <Stack.Screen 
  //       name="Detail" 
  //       component={DetailScreen}
  //     />
  //   </Stack.Navigator>
  // );
  return <RootStack />;
}