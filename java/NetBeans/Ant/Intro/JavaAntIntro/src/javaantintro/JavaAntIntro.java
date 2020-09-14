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
public class JavaAntIntro {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        System.out.println("Create SamsungCellPhone object ");
        Phone phone = new SamsungCellPhone();
        phone.call();
        phone.sms();
        phone.voice();
        
        System.out.println("\nCreate SamsungCellPhone object 2 ");
        SamsungCellPhone samsung = new SamsungCellPhone();
        samsung.call();
        samsung.sms();
        samsung.voice();
        
    }
    
}
