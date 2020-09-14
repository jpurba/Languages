/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaantintro;

/**
 *
 * @author Dell
 */
abstract class Phone {
    
    // abstract method declaration
    public abstract void sms();
    public abstract void voice();
    
    // Non abstract class
    public void call() {
        System.out.println("Calling ...");
    }
}
