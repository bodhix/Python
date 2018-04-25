#!/home/cbzhang/Sourcecode/Python/python
def test_free_list():
    list1 = [1]
    print "list1: ", list1

    list2 = [1]
    print "list2: ", list2

    list3 = [1]
    print "list3: ", list3

    list4 = [1]
    print "list4: ", list4

    list5 = [1]
    print "list5: ", list5

    list6 = [1]
    print "list6: ", list6

    del list3
    print "after delete list3, list1: ", list1

    list7 = [1]
    print "list7: ", list7

def test_allocated():
    list8 = [1]
    print "list8: ", list8

    for i in xrange(1,10):
        list8.insert(0, i)
        print "after insert ", i, list8

test_allocated()
