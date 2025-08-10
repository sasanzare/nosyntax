# Paint Costs 🎨  

A tool to calculate the total cost of your art project including canvas, brushes, paint, and tax.  

## ❓ Problem Statement  

You're preparing to paint artwork that requires:  
- Base cost: $40.00 (canvas + brushes)  
- Additional cost: $5.00 per paint color  
- Tax: 10% of total purchase  

Calculate the total project cost rounded up to the nearest whole dollar.  

## 🎯 Task  

Compute the final cost including tax based on the number of paint colors purchased.  

## 📌 Input Format  

An integer representing the number of paint colors needed.  

## 📝 Output Format  

An integer representing the total cost rounded up to the nearest whole number.  

## 🔍 Example  

### Sample Input  
```  
10  
```  

### Calculation Breakdown  
1. Base cost: $40.00  
2. Paint cost: 10 colors × $5.00 = $50.00  
3. Subtotal: $40 + $50 = $90.00  
4. Tax (10%): $90 × 0.10 = $9.00  
5. Total: $90 + $9 = $99.00  

### Sample Output  
```  
99  
```  