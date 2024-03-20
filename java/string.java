public class string {
	     public static void main(String []args){
	        String text = "Aleena";
	        System.out.println("Original Text: "+text);
	        System.out.println("\nGiven text is empty: "+text.isEmpty());
	        System.out.println("\nLength of text: "+text.length());
	        System.out.println("\nUpper Case: "+text.toUpperCase());
	        System.out.println("\nLower Case: "+text.toLowerCase());
	        System.out.println("\nReplace: "+text.replaceAll(text, "mariya"));
	        System.out.println("\nReplace first word: "+text.replaceFirst("Aleena","mariya"));
	        System.out.println("\nReplace O with $: "+text.replace('A','$'));
	        System.out.println("\nConcatenation with: "+text.concat(" ").concat("M R"));
	     }
	}
