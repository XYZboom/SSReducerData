package java.util;
class SubList                              {
           Object get(         ) {
        return null;
    }
           int size() {
        return 1;
    }
           ListIterator         listIterator() {
        return new ListIterator        () {
                          ListIterator         i = ((AbstractList        ) null).listIterator(   );
            public boolean hasNext() {
                return true;
            }
            public Object next() {
                    return null;
            }
            public boolean hasPrevious() {
                return true;
            }
            public Object previous() {
                    return null;
            }
            public int nextIndex() {
                return 1;
            }
            public int previousIndex() {
                return 1;
            }
            public void remove() {
                }
            public void set(Object e) {
                }
            public void add(Object e) {
                }
        };
    }
    }
