
import javax.swing.*;
class SwingDemo1 {
    SwingDemo1() {
        JFrame f = new JFrame("first frame");
        f.setSize(400, 300);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JLabel l1 = new JLabel("Enter name");
        JTextField t1 = new JTextField(12);
        JTextField t2 = new JTextField(12);
        JButton b1 = new JButton("OK");
        f.setLayout(new LayoutManager());
        f.add(l1);
        f.add(t1);
        f.add(t2);
        f.add(b1);
        f.setVisible(true);
    }

    public static void main(String args[]) {
        SwingDemo1 s = new SwingDemo1();
    }
}