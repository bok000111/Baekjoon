import java.util.*

fun main() {
    var sc = Scanner(System.`in`)

    var n:Int = sc.nextInt()
    var max:Int = -1000001
    var min:Int = 1000001

    for (i in 1..n) {
       var m:Int = sc.nextInt()
        if (m > max) {
            max = m
        }
        if (m < min) {
            min = m
        }
    }

    print("$min $max")
}