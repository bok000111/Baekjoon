import java.util.*

fun main() {
    var sc = Scanner(System.`in`)

    var n:Int = sc.nextInt()
    var m:Int = sc.nextInt()

    if (n < m) {
        print("<")
    }
    else if (n == m) {
        print ("==")
    }
    else if (n > m) {
        print(">")
    }
}