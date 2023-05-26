package JAVA.Workbanch;

public class classeCachorro2 {
    public static void main (String[] args){
    
        classeCachorro cachorro1 = new classeCachorro();

        cachorro1.nome = "Puppy";
        System.out.println();
        cachorro1.cor = "Marron";
        cachorro1.altura = 25;              // objetos
        cachorro1.peso = 5.5;
        cachorro1.tamanhoDoRabo = 5;

        System.out.println(cachorro1);
}
}