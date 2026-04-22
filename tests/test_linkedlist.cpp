#include <QtTest>
#include "../src/MyLinkedList.h"

class TestLinkedList : public QObject {
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testBasePath();
};

void TestLinkedList::initTestCase() {
    qDebug() << "LinkedList remove 基路径测试开始";
}

void TestLinkedList::cleanupTestCase() {
    qDebug() << "LinkedList remove 基路径测试结束";
}

void TestLinkedList::testBasePath() {
    MyLinkedList<int*> list;
    int a = 10;
    int* pNull = nullptr;
    int* pA = &a;

    // TC1：删除存在的 null
    list.add(pNull);
    QCOMPARE(list.remove(pNull), true);
    list.clear();

    // TC2：删除不存在的 null
    QCOMPARE(list.remove(pNull), false);

    // TC3：删除存在的非 null
    list.add(pA);
    QCOMPARE(list.remove(pA), true);
    list.clear();

    // TC4：删除不存在的非 null
    QCOMPARE(list.remove(pA), false);
}

QTEST_APPLESS_MAIN(TestLinkedList)
#include "test_linkedlist.moc"