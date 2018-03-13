let a = [ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 ];
let switched = true;
while (switched) {
	switched = false;
	for (i = 0; i < 10 - 1; i++) 
		if (a[i] > a[i + 1]) {
			let tmp = a[i];
			a[i] = a[i+1];
			a[i+1] = tmp;
			switched = true;
		}
}
for (i = 0; i < 10; i++) 
	document.write(a[i] + ", ")
