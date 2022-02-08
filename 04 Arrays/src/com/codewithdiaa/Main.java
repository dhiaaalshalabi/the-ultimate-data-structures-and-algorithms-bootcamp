package com.codewithdiaa;

public class Main {
    public static void main(String[] args) {
        MyArray numbers = new MyArray(2);
        numbers.insert(10);
        numbers.insert(20);
        numbers.insert(30);
        numbers.insert(40);
        numbers.print();
        numbers.size();
    }
}
