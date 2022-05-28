import java.util.*

fun main() {
    var sc = Scanner(System.`in`)

    var n:Int = sc.nextInt()

    for (i in 1..9) {
        println("$n * $i = ${n * i}")
    }
}