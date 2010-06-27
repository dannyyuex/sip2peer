//
//  NameAddress.h
//  StringTest
//
//  Created by marcopk on 09/06/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SipURL.h"


@interface NameAddress : NSObject {
	
	/** Display Name **/
	NSString* name;
	
	/** SipUrl **/
	SipURL* url;
	
}

@property (nonatomic,retain) NSString* name;
@property (nonatomic,retain) SipURL* url;


/** Creates a new NameAddress. */
-(id)initWithName:(NSString*)display_name andSipUrl:(SipURL*)url;

/** Creates a new NameAddress. */
-(id)initWithSipUrl:(SipURL*)urlValue;

/** Creates a new NameAddress. */
-(id)initWithNameAddress:(NameAddress*) naddr;

/** Creates a new NameAddress. */
-(id)initWithString:(NSString*)str;

/** Whether object <i>obj</i> is "equal to" this. */
- (BOOL)isEqual:(id)obj;

@end
