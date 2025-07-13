import { StyleSheet, Text, View, Pressable } from 'react-native'
import React from 'react'
import { useNavigation } from '@react-navigation/native'

export default function HomeScreen() {
const navigation = useNavigation()
  return (
     <View style={{flex: 1, justifyContent: 'center', alignItems: 'center'}}>
      <Text>HomeScreen</Text>
      <Pressable onPress={() => navigation.navigate('Detail', { id: '1', name: 'Detail Screen', description: 'This is a detail screen' })}
       style={styles.button}
       >
        <Text>Home</Text>
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