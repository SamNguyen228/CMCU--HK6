import { StyleSheet, Text, View, TouchableOpacity, FlatList, TextInput } from 'react-native'
import { useNavigation } from '@react-navigation/native'
import React from 'react'

const arr = [
    { id: 1, name: 'Movie 1', description: 'This is movie 1' },
    { id: 2, name: 'Movie 2', description: 'This is movie 2' },
    { id: 3, name: 'Movie 3', description: 'This is movie 3' },
    { id: 4, name: 'Movie 4', description: 'This is movie 4' },
    { id: 5, name: 'Movie 5', description: 'This is movie 5' },
];

const HomeMovie = () => {
    const navigation = useNavigation();
    const [searchmovie, setSearchMovie] = React.useState(arr);
    const Movie = ({ item }) => {
        return (
            <TouchableOpacity onPress={() => navigation.navigate('Detail', { id: item.id })} style={styles.button}>
                <Text style={styles.buttonText}>ID: {item.id}</Text>
                <Text style={styles.buttonText}>{item.name}</Text>
                <Text style={styles.buttonText}>{item.description}</Text>
            </TouchableOpacity>
        )
    }

    const search = (text) => {
        const filteredMovies = arr.filter(movie => movie.name.toLowerCase().includes(text.toLowerCase()));
        setSearchMovie(filteredMovies);
    }

    return (
        <View>
        <Text>HomeMovie screen</Text>
        <TextInput placeholder='Search' style={{ borderWidth: 1 }} value={searchmovie} onChangeText={search}></TextInput>
        <FlatList keyExtractor={(item) => item.id} data={searchmovie} renderItem={Movie}
        ></FlatList>
        <TouchableOpacity onPress={() => navigation.push('Create')} style={styles.button}>
            <Text style={styles.buttonText}>Go to Create</Text>
        </TouchableOpacity>
        </View>
    )
}

export default HomeMovie

const styles = StyleSheet.create({
    button: {
        backgroundColor: '#6200ee',
        padding: 10,
        borderRadius: 5,
        marginTop: 20,
        alignItems: 'center',
    },
    buttonText: {
        color: '#fff',
        fontSize: 16,
    },
})