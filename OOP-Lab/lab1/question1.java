class question1 { /*
					 * Write a Java program to find area and circumference of a rectangle.
					 * (Hint: circumference = 2 (length + breadth) ; area= length x breadth).
					 */
	public static void main(String args[]) {
		int l, b;
		l = Integer.parseInt(args[0]);
		b = Integer.parseInt(args[1]);
		int area = l * b;
		System.out.println(
				"length of rectangle = " + l + "\nbreadth of rectangle = " + b + "\narea of the rectangle = " + area);
		int circum = 2 * (l + b);
		System.out.println("circumference of the rectangle = " + circum);
	}
}