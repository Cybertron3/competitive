import java.math.BigInteger
import kotlin.math.max
import kotlin.math.min

fun main() {
    var t = readInt()

    while (t-- != 0) {

        var arr = readInts()
        var x  = arr[0].toLong()
        var y  = arr[1].toLong()

        var steps : Long = 0

        var tmp : Long = x.toLong()

        while(tmp*10 <= y){
            tmp *= 10
        }

        while(  y >= x ){

            while ( tmp > y && tmp != x  ){
                tmp /= 10

            }

            if(tmp <= y ){
                steps++
                y -= tmp
            }else break
        }

        steps += y
        println(steps)





//        var n = readInt()
//        var inputarr = readInts()
//
//        val pairarr = ArrayList<Pair<Int , Int>>()
//        var  i = 0
//        while(i < n){
//            pairarr.add(Pair(i , inputarr[i]))
//            i++
//        }
//        val arr = pairarr.sortedWith(compareBy({ it.second }, { it.first }))
//
//        var j = n
//        i = 0
//
//        val ans = ArrayList<Int>()
//        ans.add(arr[n-1].first)
//        j--
//        while(i != j){
//            var till = arr[i].second
//            till--
//            var itr= 0
//            while(itr < till && j-1 > i){
//                ans.add(arr[j-1].first)
//                itr++
//                j--
//            }
//            ans.add(arr[i].first)
//            i++
//        }
//
//        i = 0
//        while (i < n ){
//            print("${ans[i] + 1} " )
//            i++
//        }
//        println()


    }
}



private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints