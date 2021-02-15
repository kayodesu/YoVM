package invoke;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;

/**
 * Status: Pass
 */
public class MethodHandleTest {
    
    public static void main(String[] args) throws Throwable {
        MethodType mt = MethodType.fromMethodDescriptorString("()V", null);
        MethodHandle mh = MethodHandles.lookup().findStatic(MethodHandleTest.class, "test", mt);
        mh.invoke();
    }
    
    public static void test() {
        System.out.println("Pass");
    }
    
}
