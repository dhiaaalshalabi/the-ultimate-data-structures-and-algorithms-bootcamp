public class Main {
    public static void logO1(int[] numbers) {
        // O(1)
        System.out.println(numbers[0]); // O(1)
    }

    public static void logOn(int[] numbers) {
        // O(n)
        System.out.println("F"); // O(1)
        for (int number : numbers)  // O(n)
            System.out.println(number);
//        for (String name : names) // O(n)
//            System.out.println(name);
        System.out.println("E"); // O(1)
    }

    public static void logOn2(int[] numbers) {
        // O(n^2)
        for (int number : numbers) // O(n)
        {
            System.out.println(number);
            for (int number1 : numbers) // O(n^2) X
                System.out.println(number1);
        }
    }

    public static void main(String[] args) {
        int[] numbers = {1, 2, 3};
        logOn2(numbers);
    }
}