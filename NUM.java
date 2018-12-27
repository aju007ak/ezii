class NUM
{ 
public boolean isValidNumeric(String s) 
{ 
s = s.trim(); 
if (s.length() == 0) 
return false; 
if (s.length() == 1 && 
!Character.isDigit(s.charAt(0))) 
return false; 
if (s.charAt(0)!='+' && s.charAt(0)!='-' && 
!Character.isDigit(s.charAt(0)) && 
s.charAt(0)!='.') 
return false; 
boolean flag= false; 
for (int i=1; i<s.length(); i++) 
{ 
if (!Character.isDigit(str.charAt(i)) && 
s.charAt(i) != 'e' && s.charAt(i)!='.' && 
s.charAt(i) != '+' && s.charAt(i)!='-') 
return false; 
if (s.charAt(i) == '.') 
{ 
if (flag == true) 
return false; 
if (i+1 >= s.length()) 
return false; 
if (!Character.isDigit(s.charAt(i+1))) 
return false
} 
else if (str.charAt(i) == 'e') 
{ 
flag = true; 
if (!Character.isDigit(str.charAt(i-1))) 
return false; 
if (i+1>=s.length()) 
return false; 
if (!Character.isDigit(s.charAt(i+1)) && 
s.charAt(i+1) != '+' && 
 s.charAt(i+1) != '-') 
return false; 
} 
} 
return true; 
} 
public static void main (String[] args) 
{ 
String input = "0.1e10"; 
        NUM num = new NUM(); 
        System.out.println(num.isValidNumeric(input)); 
    } 
} 
