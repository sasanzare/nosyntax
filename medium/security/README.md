# Security

## ❓ Problem Statement  
You are in charge of security at a casino, and there is a thief who is trying to steal the casino's money! Look over the security diagrams to make sure that you always have a guard between the thief and the money. There is one money location, one thief, and any number of guards on each floor of the casino.

## 🎯 Task  
Evaluate a given floor of the casino to determine if there is a guard between the money and the thief. If there is not, you will sound an alarm.

## 📌 Input Format  
A string of characters that includes:  
- `$` (money)  
- `T` (thief)  
- `G` (guard)  
- `x` (empty space)  

## 📝 Output Format  
A string that says:  
- `'ALARM'` if the money is in danger (no guard between thief and money)  
- `'quiet'` if the money is safe (guard present between thief and money)  

## 🔍 Example  

### Sample Input  
```  
'xxxxxGxx$xxxT'  
```  

### Sample Output  
```  
'ALARM'  
```