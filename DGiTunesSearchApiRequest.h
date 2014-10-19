//
//  DGiTunesSearchApiRequest.h
//  DGiTunesSearchApi
//
//  Created by Daniel Cohen Gindi on 3/29/13.
//  Copyright (c) 2013 danielgindi@gmail.com. All rights reserved.
//
//  https://github.com/danielgindi/DGiTunesSearchApi
//
//  The MIT License (MIT)
//  
//  Copyright (c) 2014 Daniel Cohen Gindi (danielgindi@gmail.com)
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE. 
//  

#import <Foundation/Foundation.h>

typedef void (^DGiTunesSearchApiRequestJsonResponseBlock)(NSObject *response);
typedef void (^DGiTunesSearchApiRequestErrorBlock)(NSError *error);

@interface DGiTunesSearchApiRequest : NSObject

- (id)initWithUrl:(NSURL *)url completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock;
- (id)initWithUrl:(NSURL *)url cachePolicy:(NSURLRequestCachePolicy)cachePolicy completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock;
- (id)initWithUrl:(NSURL *)url timeout:(NSTimeInterval)timeout completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock;
- (id)initWithUrl:(NSURL *)url cachePolicy:(NSURLRequestCachePolicy)cachePolicy timeout:(NSTimeInterval)timeout completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock;
- (DGiTunesSearchApiRequest *)start;
- (DGiTunesSearchApiRequest *)cancel;
+ (DGiTunesSearchApiRequest *)requestWithUrl:(NSURL *)url completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock start:(BOOL)start;
+ (DGiTunesSearchApiRequest *)requestWithUrl:(NSURL *)url cachePolicy:(NSURLRequestCachePolicy)cachePolicy completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock start:(BOOL)start;
+ (DGiTunesSearchApiRequest *)requestWithUrl:(NSURL *)url timeout:(NSTimeInterval)timeout completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock start:(BOOL)start;
+ (DGiTunesSearchApiRequest *)requestWithUrl:(NSURL *)url cachePolicy:(NSURLRequestCachePolicy)cachePolicy timeout:(NSTimeInterval)timeout completion:(DGiTunesSearchApiRequestJsonResponseBlock)completionBlock error:(DGiTunesSearchApiRequestErrorBlock)errorBlock start:(BOOL)start;

+ (NSString *)urlEncodedString:(NSString *)component;

@property (nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property (nonatomic, assign) NSTimeInterval timeout;
@property (nonatomic, strong) NSURL *url;
@property (nonatomic, copy)   DGiTunesSearchApiRequestJsonResponseBlock completionBlock;
@property (nonatomic, copy)   DGiTunesSearchApiRequestErrorBlock errorBlock;

@end
