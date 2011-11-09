/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLResponse;

@interface WebResourcePrivate : NSObject  {
    struct ArchiveResource { int (**x1)(); int x2; struct KURL { 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            int m_schemeEnd; 
            int m_userStart; 
            int m_userEnd; 
            int m_passwordEnd; 
            int m_hostEnd; 
            int m_portEnd; 
            int m_pathAfterLastSlash; 
            int m_pathEnd; 
            int m_queryEnd; 
            int m_fragmentEnd; 
        } x3; struct ResourceResponse { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WTF::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolIsInHTTPFamily : 1; 
                int m_schemeEnd; 
                int m_userStart; 
                int m_userEnd; 
                int m_passwordEnd; 
                int m_hostEnd; 
                int m_portEnd; 
                int m_pathAfterLastSlash; 
                int m_pathEnd; 
                int m_queryEnd; 
                int m_fragmentEnd; 
            } m_url; 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_mimeType; 
            long long m_expectedContentLength; 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_textEncodingName; 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_suggestedFilename; 
            int m_httpStatusCode; 
            struct String { 
                struct RefPtr<WTF::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpStatusText; 
            struct HTTPHeaderMap { 
                struct HashTable<WTF::AtomicString,std::pair<WTF::AtomicString, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::AtomicString, WTF::String> >,WTF::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::AtomicString> > { 
                    struct pair<WTF::AtomicString,WTF::String> {} *m_table; 
                    int m_tableSize; 
                    int m_tableSizeMask; 
                    int m_keyCount; 
                    int m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            int m_lastModifiedDate; 
            unsigned int m_wasCached : 1; 
            unsigned int m_connectionID; 
            unsigned int m_connectionReused : 1; 
            struct RefPtr<WebCore::ResourceLoadTiming> { 
                struct ResourceLoadTiming {} *m_ptr; 
            } m_resourceLoadTiming; 
            struct RefPtr<WebCore::ResourceLoadInfo> { 
                struct ResourceLoadInfo {} *m_ptr; 
            } m_resourceLoadInfo; 
            unsigned int m_isNull : 1; 
            unsigned int m_haveParsedCacheControlHeader : 1; 
            unsigned int m_haveParsedAgeHeader : 1; 
            unsigned int m_haveParsedDateHeader : 1; 
            unsigned int m_haveParsedExpiresHeader : 1; 
            unsigned int m_haveParsedLastModifiedHeader : 1; 
            unsigned int m_cacheControlContainsNoCache : 1; 
            unsigned int m_cacheControlContainsNoStore : 1; 
            unsigned int m_cacheControlContainsMustRevalidate : 1; 
            double m_cacheControlMaxAge; 
            double m_age; 
            double m_date; 
            double m_expires; 
            double m_lastModified; 
            struct RetainPtr<_CFURLResponse*> { 
                struct _CFURLResponse {} *m_ptr; 
            } m_cfResponse; 
            struct RetainPtr<NSURLResponse> { 
                NSURLResponse *m_ptr; 
            } m_nsResponse; 
            int m_initLevel; 
        } x4; struct RefPtr<WebCore::SharedBuffer> { 
            struct SharedBuffer {} *m_ptr; 
        } x5; struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x6; struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x7; struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x8; boolx9; } *coreResource;
}

+ (void)initialize;

- (void)finalize;
- (id)initWithCoreResource:(struct PassRefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; })arg1;
- (id)init;
- (void)dealloc;

@end