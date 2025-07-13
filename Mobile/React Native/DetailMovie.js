import { StyleSheet, Text, View, TouchableOpacity  } from 'react-native'
import { useNavigation } from '@react-navigation/native'
import React from 'react'

const arr = [
    { id: 1, name: 'Movie 1', description: 'This is movie 1' },
    { id: 2, name: 'Movie 2', description: 'This is movie 2' },
    { id: 3, name: 'Movie 3', description: 'This is movie 3' },
    { id: 4, name: 'Movie 4', description: 'This is movie 4' },
    { id: 5, name: 'Movie 5', description: 'This is movie 5' },
];

const DetailMovie = ({route}) => {
    // const navigation = useNavigation();
    const { id } = route.params;
    const movie = arr.find(item => item.id === id);
  return (
    <View style={{ flex: 1, justifyContent: 'center', alignItems: 'center', backgroundColor: 'yellow' }}>
        <Text>DetailMovie</Text>
        <Text>ID: {id}</Text>
        <Text>Name: {movie ? movie.name : 'Movie not found'}</Text>
        <Text>Description: {movie ? movie.description : 'No description available'}</Text>
        
        {/* <TouchableOpacity onPress={() => navigation.push('Detail', { id: Math.floor(Math.random() * 100), description: 'This is a detail screen' })} style={styles.button}>
            <Text style={styles.buttonText}>Go to Detail</Text>
        </TouchableOpacity>
         <TouchableOpacity onPress={() => navigation.navigate('Detail', { id: Math.floor(Math.random() * 100), description: 'This is a detail screen' })}  style={styles.button}>
            <Text style={styles.buttonText}>Navigate To Detail</Text>
        </TouchableOpacity>
        <TouchableOpacity onPress={() => navigation.goBack()} style={styles.button}>
            <Text style={styles.buttonText}>Go Back</Text>
        </TouchableOpacity> */}
        {/* <TouchableOpacity onPress={() => navigation.goBack()} style={styles.button}>
            <Text style={styles.buttonText}>Go Back</Text>
        </TouchableOpacity>
        <TouchableOpacity onPress={() => navigation.push('Detail')} style={styles.button}>
            <Text style={styles.buttonText}>Go to Detail Push</Text>
        </TouchableOpacity>
         <TouchableOpacity onPress={() => navigation.popTo('HomeScreen')} style={styles.button}>
            <Text style={styles.buttonText}>Pop to Home</Text>
        </TouchableOpacity>
         <TouchableOpacity onPress={() => navigation.push('CreateMovie')} style={styles.button}>
            <Text style={styles.buttonText}>Go to Create</Text>
        </TouchableOpacity>  */}
    </View>
  )
}

export default DetailMovie

const styles = StyleSheet.create({
    button: {
        backgroundColor: '#ccc',
        padding: 10,
        borderRadius: 5,
        marginTop: 20,
        alignItems: 'center',
    },
    buttonText: {
        color: '#111',
        fontSize: 16,
    },
})