class node:
    def __init__(self,data):
        self.data=data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next

    def append(self, data):
        new_node = node(data)
        if(self.head is None):
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
    def prepend(self,data):
        new_node = node(data)
        new_node.next = self.head
        self.head = new_node
    

    def inser_after_node(self,prev_node,data):
        if not prev_node:
            print("Previous node is not in the list")
            return
        new_node = node(data)
        new_node.next = prev_node.next
        prev_node.next=new_node 
    
    def delete_node(self,key):
        cur_node = self.head
        if cur_node and cur_node.data == key:
            self.head = cur_node.next
            cur_node = None 
            return
        prev = None
        while cur_node and cur_node.data!=key:
            prev = cur_node
            cur_node=cur_node.next
        if cur_node is None:
            return
        prev.next = cur_node.next
        cur_node=None

    def delete_node_at_pos(self,pos):
        cur_node = self.head
        if pos==0:
            self.head = cur_node.next
            cur_node=None
            return
        prev = None
        count =1
        while cur_node and count !=pos:
            prev = cur_node
            cur_node = cur_node.next
            count+=1
        if cur_node is None:
            return 
        prev.next = cur_node.next
        cur_node = None
    ## count the length of a Linklist
    def len_iterative(self):
        count=0
        cur_node = self.head
        while cur_node:
            count +=1
            cur_node = cur_node.next
        return count
    def len_recursive(self,node):
        if node is None:
            return 0
        return 1 + self.len_recursive(node.next)

    def swap_nodes(self,key_1,key_2):
        if(key_1==key_2):
            return
        prev_1=None
        curr_1 = self.head
        while curr_1 and curr_1.data != key_1:
            prev_1=curr_1
            curr_1=curr_1.next
        prev_2 = None
        curr_2=self.head
        while curr_2 and curr_2.data !=key_2:
            prev_2=curr_2
            curr_2 = curr_2.next
        if not curr_1 or not curr_2:
            return
        if prev_1:
            prev_1.next = curr_2
        else:
            self.head = curr_2
        if prev_2:
            prev_2.next = curr_1
        else:
            self.head = curr_1
        curr_1.next , curr_2.next = curr_2.next , curr_1.next
    


    def print_heplper(self,node,name):
        if node is None:
            print(name+":None")
        else:
            print(name+":"+node.data)

    def reverse_iteration(self):
        prev = None 
        cur = self.head
        while cur:
            nxt = cur.next
            cur.next = prev
            self.print_heplper(prev,"PREV")
            self.print_heplper(cur,"CUR")
            self.print_heplper(nxt,"Nxt")
            print("\n")

            prev = cur  
            cur = nxt
        self.head = prev





llist = LinkedList()
llist.append("A")
llist.append("B")
llist.append("C")
llist.append("D")
# llist.swap_nodes("B","A")
llist.reverse_iteration()
# llist.delete_node_at_pos(2)
# llist.delete_node("D")
# llist.inser_after_node( llist.head.next,"E")
# print(llist.head.data)
# print(llist.head.next.data)
# print(llist.len_iterative())
# print(llist.len_recursive(llist.head))
llist.print_list()