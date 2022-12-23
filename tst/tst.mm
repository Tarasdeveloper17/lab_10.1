
#import <XCTest/XCTest.h>
#include "header.h"
@interface tst : XCTestCase

@end

@implementation tst


- (void)testExample {
    char fname[100] = "t.txt";
    int res  = CheckString(fname);
    
    XCTAssertNotEqual(res, -1);
    
    
}


@end
