let a = [ 10, -5, 8, 8, 9, 7, -3, -2, 3, 4, 5, 11 ];

while (!isSorted(a)) {
		let i = Math.floor(Math.random() * (a.length - 1 + 0) ) + 0;
		let tmp = a[i];
		a[i] = a[i+1];
		a[i+1] = tmp;
}

for (i = 0; i < a.length; i++) 
	document.write(a[i], ",")

function isSorted(ar)
{
	for (i = 0; i < ar.length-1; i++) {
		if (ar[i] > ar[i+1]) {
			return false;
		}
	}
	return true;
}