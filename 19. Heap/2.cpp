//it can be min heap or max heap it can not be bot at a same time
//heap ==> 1 binary tree 2 complete binary tree 3. Heap order property
//complete binary ne array ma karva nu sahelu 
// i parent hoy to tena 2 child 2i ane 2i+1 thay
//chile i hoy to parent i/2 thay or i-1/2
//complexity worst o(logn)
//heap does not a sorted array


//min heap che
/*
get min( ) return in o(1)
pan jo tree no main node j kadhi nakhiae to su karvu
aetle 1st ane last ne swap 
pachi array mathi last kadhavo sahelo
ane tyar bad min heapify kari devanu child na be mathi je nanu
hoy tene root tarike lai le ane aevi rete kari ne mota element ne 
niche lai jay ane nanu to upar aai j gyu
aa rite recursiove karin ne heapify kare 
heapify   o(logn)
*/