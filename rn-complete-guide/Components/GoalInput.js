import React, { useState } from 'react'
import { View, TextInput, Button, StyleSheet } from 'react-native'
import GoalItem from './GoalItem'

const GoalInput = props => {
    const [enteredGoal, setEnteredGoal] = useState([]);

    const goalInputHanlder = (enteredText) => {
        setEnteredGoal(enteredText);
    };

    return (
        <View style={styles.inputContainer}>
            <TextInput 
                placeholder="enter your goal" 
                style={styles.input} 
                onChangeText={goalInputHanlder}
                value={enteredGoal} 
            />
            <Button 
                title="Add" 
                onPress={props.onAddGoal.bind(this, enteredGoal)}
            />
        </View>
    );
};

const styles = StyleSheet.create({ 
    input: { 
        borderColor: 'black', 
        width: '80%', 
        borderWidth: 1, 
        padding: 10 
    },
    inputContainer: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center'
    },
})
export default GoalInput;