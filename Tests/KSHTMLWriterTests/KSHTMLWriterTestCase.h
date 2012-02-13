//  Created by Sam Deane on 27/01/2012.
//  Copyright (c) 2012 Karelia Software. All rights reserved.

#import <SenTestingKit/SenTestingKit.h>

@interface KSHTMLWriterTestCase : SenTestCase

@property (strong, nonatomic) id testParam;

+ (SenTestCase*)testCaseWithSelector:(SEL)selector param:(id)param;
- (void)assertString:(NSString*)string1 matchesString:(NSString*)string2;

@end
