import java.util.*

fun main() {
    var sc = Scanner(System.`in`)

    var n:Int = sc.nextInt()

    for (i in 1..n) {
        for(j in n-i downTo 1) {
            print(" ")
        }
        for(k in 1..i) {
            print("*")
        }
        print("\n")
    }
}