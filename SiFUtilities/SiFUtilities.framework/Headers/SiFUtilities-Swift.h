// Generated by Apple Swift version 3.0 (swiftlang-800.0.46.2 clang-800.0.38)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import AVFoundation;
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIImage;

@interface AVPlayer (SWIFT_EXTENSION(SiFUtilities))
- (UIImage * _Nullable)takeScreenshot;
@end


@interface NSObject (SWIFT_EXTENSION(SiFUtilities))
@end


@interface NSObject (SWIFT_EXTENSION(SiFUtilities))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull nameOfClass;)
+ (NSString * _Nonnull)nameOfClass;
@property (nonatomic, readonly, copy) NSString * _Nonnull nameOfClass;
@end

@class UIViewController;

@interface UIApplication (SWIFT_EXTENSION(SiFUtilities))
+ (UIViewController * _Nullable)topViewControllerWithBase:(UIViewController * _Nullable)base;
@end


@interface UIColor (SWIFT_EXTENSION(SiFUtilities))
- (nonnull instancetype)initWithR:(CGFloat)r g:(CGFloat)g b:(CGFloat)b;
- (nonnull instancetype)initWithR:(CGFloat)r g:(CGFloat)g b:(CGFloat)b aPercent:(CGFloat)aPercent;
+ (UIColor * _Nonnull)randomColor:(CGFloat)alpha;
+ (UIColor * _Nonnull)randomColor;
@end


@interface UIImage (SWIFT_EXTENSION(SiFUtilities))
+ (UIImage * _Nullable)imageWithColor:(UIColor * _Nonnull)color;
+ (UIImage * _Nullable)imageWithColor:(UIColor * _Nonnull)color size:(CGSize)size;
@end


@interface UINavigationController (SWIFT_EXTENSION(SiFUtilities))
- (BOOL)sif_prefersStatusBarHidden;
- (UIStatusBarStyle)sif_preferredStatusBarStyle;
@end


@interface UITabBarController (SWIFT_EXTENSION(SiFUtilities))
- (UIStatusBarStyle)sif_preferredStatusBarStyle;
- (BOOL)sif_prefersStatusBarHidden;
@end


@interface UIView (SWIFT_EXTENSION(SiFUtilities))
- (UIImage * _Nullable)takeScreenshot;
@end


@interface UIView (SWIFT_EXTENSION(SiFUtilities))
@property (nonatomic) NSInteger loadingCount;
- (void)showLoadingWithBlurBackground:(BOOL)blurBackground customIndicator:(UIView * _Nullable)customIndicator animated:(BOOL)animated;
- (void)hideLoadingWithAnimated:(BOOL)animated;
@end


@interface UIViewController (SWIFT_EXTENSION(SiFUtilities))
+ (nonnull instancetype)instantiateViewControllerFromStoryboard:(NSString * _Nonnull)name withIdentifier:(NSString * _Nonnull)identifier;
+ (nonnull instancetype)instantiateViewControllerFromMainStoryboardWithIdentifier:(NSString * _Nonnull)identifier;
+ (nonnull instancetype)instantiateViewControllerFromMainStoryboard;
+ (nonnull instancetype)instantiateViewControllerFromStoryboardFile:(NSString * _Nonnull)fileName;
/**
  Init with storyboard path
  \param storyboardPath <storyboard file name>.<storyboard identifier>


  returns:
  instance of this class
*/
+ (nonnull instancetype)instantiateViewControllerWithStoryboardPath:(NSString * _Nonnull)storyboardPath;
@end


@interface UIViewController (SWIFT_EXTENSION(SiFUtilities))
+ (void)initialize SWIFT_METHOD_FAMILY(none);
- (void)viewDidFinishLayout;
@end


@interface UIViewController (SWIFT_EXTENSION(SiFUtilities))
@property (nonatomic) BOOL layoutDidFinished;
@property (nonatomic) BOOL blurLoading;
@property (nonatomic) UIStatusBarStyle statusBarStyle;
@property (nonatomic) BOOL statusBarHidden;
- (void)showLoading;
- (void)hideLoading;
@end


SWIFT_CLASS("_TtC12SiFUtilities14VersionChecker")
@interface VersionChecker : NSObject <NSURLSessionDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) VersionChecker * _Nonnull sharedInstance;)
+ (VersionChecker * _Nonnull)sharedInstance;
- (void)checkVersionWithCompletion:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
