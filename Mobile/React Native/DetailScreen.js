import { StyleSheet, Text, View, Pressable } from 'react-native'
import React from 'react'
import { useNavigation, useRoute } from '@react-navigation/native'

export default function DetailScreen({route}) {
  const navigation = useNavigation()
    const {id, name, description} = route.params;
    return (
    <View style={{flex: 1, justifyContent: 'center', alignItems: 'center'}}>
      <Text>DetailScreen</Text>
        <Text>Id: {id}</Text>
        <Text>Name: {name}</Text>
        <Text>Description: {description}</Text>
      <Pressable onPress={() => navigation.goBack()} style={styles.button}>
        <Text>Back</Text>
        </Pressable>

        <Pressable onPress={() => navigation.push('Detail')} style={styles.button}>
        <Text>Detail</Text>
        </Pressable>

        <Pressable onPress={() => navigation.popTo('Home')} style={styles.button}>
        <Text>Pop</Text>
        </Pressable>
    </View>
  )
}

const styles = StyleSheet.create({
    button: {
        backgroundColor: 'yellow',
        padding: 10,
        borderWidth: 1,
        width: 100,
        borderRadius: 10,
        alignItems: 'center'
    }
})