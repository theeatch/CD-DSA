class question3 {/* Write a Java program to generate odd numbers from 1 to 100. */
	public static void main(String args[]) {
		int i;
		for (i = 0; i < 100; i++) {
			if (i % 2 != 0) {
				System.out.println("" + i);
			}
		}
	}
}