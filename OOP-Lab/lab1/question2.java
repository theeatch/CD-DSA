class question2 {/*
					 * Write a Java program to enter 10 numbers and display the number of
					 * positive,negative and zeros number.
					 */
	public static void main(String args[]) {
		int i, pos = 0, neg = 0, zereos = 0, l;
		for (i = 0; i < 10; i++) {
			l = Integer.parseInt(args[i]);
			if (l < 0) {
				neg++;
			} else if (l > 0) {
				pos++;
			} else {
				zereos++;
			}
		}
		System.out.println(
				"number of positive " + pos + " \nnumber of negatives " + neg + " \nnumber of zereos " + zereos);
	}
}