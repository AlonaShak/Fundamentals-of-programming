window.onload=function () {
let btn1= document.forms["polindr"]["check"];
 btn1.onclick=function(){

 	document.getElementById('result1').innerHTML=polindrome(document.getElementById('str1').value);
 	//document.forms["polindr"]["result"].value=polindrome(document.forms["polindr"]["str"].value);
 }
 

	function polindrome(str)
{
	str=str.toLowerCase();
	return str===str.split('').reverse().join('');
}
}