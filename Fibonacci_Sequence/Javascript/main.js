let b = 0;
let a = 1;
document.write(b + "\n" + a + "\n");
for (i = 0; i < 40; i++) {
	a += b;
	document.write(a + "\n");
	b = a - b;
}
