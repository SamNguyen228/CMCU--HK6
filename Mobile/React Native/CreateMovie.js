import { StyleSheet, Text, View, TouchableOpacity, TextInput } from 'react-native'
import React from 'react'
import { useNavigation } from '@react-navigation/native'

const CreateMovie = () => {
    const navigation = useNavigation();
    return (
    <View style={{backgroundColor: 'yellow' }}>
        <TextInput placeholder='Create' style={{ borderWidth: 1 }}></TextInput>
      <Text>CreateMovie</Text>
      <TouchableOpacity onPress={() => navigation.push('Detail')} style={styles.button}>
        <Text style={styles.buttonText}>Go to Detail</Text>
    </TouchableOpacity>
    {/* <TouchableOpacity onPress={() => navigation.goBack()} style={styles.button}>
        <Text style={styles.buttonText}>Go Back Home</Text>
    </TouchableOpacity>
    <TouchableOpacity onPress={() => navigation.push('Create')} style={styles.button}>
        <Text style={styles.buttonText}>Push to Create</Text>
    </TouchableOpacity> */}
    </View>
  )
}

export default CreateMovie

const styles = StyleSheet.create({})