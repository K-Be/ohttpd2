//
//  CGIHTTPRequest.h
//  ohttpd2
//
//  Created by Maxthon Chan on 13-5-17.
//  Copyright (c) 2013年 muski. All rights reserved.
//

#import <CGIKit/CGICommon.h>

@interface CGIHTTPRequest : NSObject

@property NSMutableDictionary *allHeaderFields;
@property NSString *method;
@property NSString *requestPath;
@property NSString *requestFile;
@property NSString *protocolVersion;
@property NSData *requestBody;
@property BOOL SSL;

@end

@interface CGIHTTPRequest (CGIParsers)

- (NSDictionary *)query;
- (NSDictionary *)form;
- (NSDictionary *)acceptMIME;
- (NSDictionary *)acceptLanguage;
- (NSDictionary *)acceptStringEncoding;
- (NSDictionary *)cookie;

@end
