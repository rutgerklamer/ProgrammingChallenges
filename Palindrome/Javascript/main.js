function reverse(s){
    return s.split("").reverse().join("");
}

if (reverse("racecar") == "racecar")
		document.write("Palindrome");
else 
		document.write("No Palindrome");
