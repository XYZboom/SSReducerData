package java.util;
       class Collections {
           class UnmodifiableCollection<E>                                        {
        public int size()                   {return 1;}
        public boolean isEmpty()            {return true;}
        public boolean contains(Object o)   {return true;}
        public Object[] toArray()           {return                      null;}
        public <T> T[] toArray(T[] a)       {return       null;}
        public Iterator    iterator() {
            return               null;
        }
        public boolean add(E e) {
            throw new UnsupportedOperationException();
        }
        public boolean remove(Object o) {
            throw new UnsupportedOperationException();
        }
        public boolean containsAll(Collection    coll) {
            return true;
        }
        public boolean addAll(Collection              coll) {
            throw new UnsupportedOperationException();
        }
        public boolean removeAll(Collection    coll) {
            throw new UnsupportedOperationException();
        }
        public boolean retainAll(Collection    coll) {
            throw new UnsupportedOperationException();
        }
        public void clear() {
            }
        }
           class UnmodifiableSet    extends UnmodifiableCollection
                                                                 {
        }
           class UnmodifiableSortedSet<E>
                             extends UnmodifiableSet
                                                                   {
        public Comparator            comparator() {return                                   null;}
        public SortedSet    subSet(E fromElement, E toElement) {
            return                                               null;
        }
        public SortedSet    headSet(E toElement) {
            return                                               null;
        }
        public SortedSet    tailSet(E fromElement) {
            return                                               null;
        }
        public E first()                   {return null;}
        public E last()                    {return null;}
    }
           class UnmodifiableNavigableSet<E>
                             extends UnmodifiableSortedSet<E>
                             implements NavigableSet<E>               {
                       class EmptyNavigableSet<E> extends UnmodifiableNavigableSet<E>
                                    {
            }
                             NavigableSet<?> EMPTY_NAVIGABLE_SET =
                new EmptyNavigableSet<>();
        public E lower(E e)                             { return null; }
        public E floor(E e)                             { return null; }
        public E ceiling(E e)                         { return null; }
        public E higher(E e)                           { return null; }
        public E pollFirst()     { throw new UnsupportedOperationException(); }
        public E pollLast()      { throw new UnsupportedOperationException(); }
        public NavigableSet    descendingSet()
                 { return                                                  null; }
        public Iterator    descendingIterator()
                                         { return                         null; }
        public NavigableSet    subSet(E fromElement, boolean fromInclusive, E toElement, boolean toInclusive) {
            return                                                  null;
        }
        public NavigableSet    headSet(E toElement, boolean inclusive) {
            return                                                  null;
        }
        public NavigableSet    tailSet(E fromElement, boolean inclusive) {
            return                                                  null;
        }
    }
    }
