//
//  CGIHTTPResponse.h
//  ohttpd2
//
//  Created by Maxthon Chan on 13-5-17.
//  Copyright (c) 2013年 muski. All rights reserved.
//

#import <CGIKit/CGICommon.h>

@class CGIHTTPRequest;

@interface CGIHTTPResponse : NSObject

@property NSMutableDictionary *allHeaderFields;
@property NSUInteger statusCode;
@property NSString *status;
@property NSString *protocolVersion;
@property NSData *responseBody;

- (id)initWithRequest:(CGIHTTPRequest *)request;

@end

@interface CGIHTTPResponse (CGIParsers)

- (void)redirect:(NSString *)target;
- (void)proxy:(NSString *)target;

+ (instancetype)HTTP100Response;
+ (instancetype)HTTP400Response;
+ (instancetype)HTTP403ResponseWithFile:(NSString *)file;
+ (instancetype)HTTP500ResponseWithException:(NSException *)exception;

@end
