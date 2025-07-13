public class demo {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        String s1 = new String("Ha Noi");
        String s2 = new String("Ha Noi");
        System.out.println(s1 == s2); // false
        System.out.println(s1.equals(s2)); // true
        String s3 = s1;
        System.out.println(s1 == s3); // true
        s3 = "Ho Chi Minh";
        String s4 = "Ho Chi Minh";
        System.out.println(s3 == s4); // true
        s4 = "Da Lat";
        System.out.println(s3); 

        Integer i1 = new Integer(5);
        Integer i2 = new Integer(5);
        System.out.println(i1 == i2); // false
        i2 = i1;
        System.out.println(i1 == i2); // true
        i1 = 10;
        i1 = 20;
        System.out.println(i2);

        int[] arr1 = {1, 2, 3};
        arr1[1]= 5;
        int[] arr2 = arr1;
        arr2[0] = 10;
        System.out.println(arr1[0]); // 10
        final int[] arr3 = {1, 2, 3};
        arr3[0] = 10; // OK
        int x = 5;
        x = 10; // OK
        final int y = 5;
        // y = 10; // Error: cannot assign a value to final variable y
    }
}