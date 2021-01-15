enum curlopt {
CURLOPT_NOTHING = 0, 
CURLOPT_FILE = 10001, 
CURLOPT_URL = 10002, 
CURLOPT_PORT = 3, 
CURLOPT_PROXY = 10004, 
CURLOPT_USERPWD = 10005, 
CURLOPT_PROXYUSERPWD = 10006, 
CURLOPT_RANGE = 10007, 
CURLOPT_INFILE = 10009, 
CURLOPT_ERRORBUFFER = 10010, 
CURLOPT_WRITEFUNCTION = 20011, 
CURLOPT_READFUNCTION = 20012, 
CURLOPT_TIMEOUT = 13, 
CURLOPT_INFILESIZE = 14, 
CURLOPT_POSTFIELDS = 10015, 
CURLOPT_REFERER = 10016, 
CURLOPT_FTPPORT = 10017, 
CURLOPT_USERAGENT = 10018, 
CURLOPT_LOW_SPEED_LIMIT = 19, 
CURLOPT_LOW_SPEED_TIME = 20, 
CURLOPT_RESUME_FROM = 21, 
CURLOPT_COOKIE = 10022, 
CURLOPT_HTTPHEADER = 10023, 
CURLOPT_HTTPPOST = 10024, 
CURLOPT_SSLCERT = 10025, 
CURLOPT_SSLCERTPASSWD = 10026, 
CURLOPT_SSLKEYPASSWD = 10026, 
CURLOPT_CRLF = 27, 
CURLOPT_QUOTE = 10028, 
CURLOPT_WRITEHEADER = 10029, 
CURLOPT_COOKIEFILE = 10031, 
CURLOPT_SSLVERSION = 32, 
CURLOPT_TIMECONDITION = 33, 
CURLOPT_TIMEVALUE = 34, 
CURLOPT_HTTPREQUEST = 10035, 
CURLOPT_CUSTOMREQUEST = 10036, 
CURLOPT_STDERR = 10037, 
CURLOPT_POSTQUOTE = 10039, 
CURLOPT_WRITEINFO = 10040, 
CURLOPT_VERBOSE = 41, 
CURLOPT_HEADER = 42, 
CURLOPT_NOPROGRESS = 43, 
CURLOPT_NOBODY = 44, 
CURLOPT_FAILONERROR = 45, 
CURLOPT_UPLOAD = 46, 
CURLOPT_POST = 47, 
CURLOPT_FTPLISTONLY = 48, 
CURLOPT_FTPAPPEND = 50, 
CURLOPT_NETRC = 51, 
CURLOPT_FOLLOWLOCATION = 52, 
CURLOPT_FTPASCII = 53, 
CURLOPT_TRANSFERTEXT = 53, 
CURLOPT_PUT = 54, 
CURLOPT_MUTE = 55, 
CURLOPT_PROGRESSFUNCTION = 20056, 
CURLOPT_PROGRESSDATA = 10057, 
CURLOPT_AUTOREFERER = 58, 
CURLOPT_PROXYPORT = 59, 
CURLOPT_POSTFIELDSIZE = 60, 
CURLOPT_HTTPPROXYTUNNEL = 61, 
CURLOPT_INTERFACE = 10062, 
CURLOPT_KRB4LEVEL = 10063, 
CURLOPT_SSL_VERIFYPEER = 64, 
CURLOPT_CAINFO = 10065, 
CURLOPT_PASSWDFUNCTION = 20066, 
CURLOPT_PASSWDDATA = 10067, 
CURLOPT_MAXREDIRS = 68, 
CURLOPT_FILETIME = 10069, 
CURLOPT_TELNETOPTIONS = 10070, 
CURLOPT_MAXCONNECTS = 71, 
CURLOPT_CLOSEPOLICY = 72, 
CURLOPT_CLOSEFUNCTION = 20073, 
CURLOPT_FRESH_CONNECT = 74, 
CURLOPT_FORBID_REUSE = 75, 
CURLOPT_RANDOM_FILE = 10076, 
CURLOPT_EGDSOCKET = 10077, 
CURLOPT_CONNECTTIMEOUT = 78, 
CURLOPT_HEADERFUNCTION = 20079, 
CURLOPT_HTTPGET = 80, 
CURLOPT_SSL_VERIFYHOST = 81, 
CURLOPT_COOKIEJAR = 10082, 
CURLOPT_SSL_CIPHER_LIST = 10083, 
CURLOPT_HTTP_VERSION = 84, 
CURLOPT_FTP_USE_EPSV = 85, 
CURLOPT_SSLCERTTYPE = 10086, 
CURLOPT_SSLKEY = 10087, 
CURLOPT_SSLKEYTYPE = 10088, 
CURLOPT_SSLENGINE = 10089, 
CURLOPT_SSLENGINE_DEFAULT = 90, 
CURLOPT_DNS_USE_GLOBAL_CACHE = 91, 
CURLOPT_DNS_CACHE_TIMEOUT = 92, 
CURLOPT_PREQUOTE = 10093
};

enum curlinfo {
CURLINFO_EFFECTIVE_URL = 1048577,
CURLINFO_HTTP_CODE = 2097154,
CURLINFO_FILETIME = 2097166,
CURLINFO_TOTAL_TIME = 3145731,
CURLINFO_NAMELOOKUP_TIME = 3145732,
CURLINFO_CONNECT_TIME = 3145733,
CURLINFO_PRETRANSFER_TIME = 3145734,
CURLINFO_STARTTRANSFER_TIME = 3145745,
CURLINFO_REDIRECT_COUNT = 2097172,
CURLINFO_REDIRECT_TIME = 3145747,
CURLINFO_SIZE_UPLOAD = 3145735,
CURLINFO_SIZE_DOWNLOAD = 3145736,
CURLINFO_SPEED_DOWNLOAD = 3145737,
CURLINFO_SPEED_UPLOAD = 3145738,
CURLINFO_HEADER_SIZE = 2097163,
CURLINFO_HEADER_OUT = 2,
CURLINFO_REQUEST_SIZE = 2097164,
CURLINFO_SSL_VERIFYRESULT = 2097165,
CURLINFO_CONTENT_LENGTH_DOWNLOAD = 3145743,
CURLINFO_CONTENT_LENGTH_UPLOAD = 3145744,
CURLINFO_CONTENT_TYPE = 1048594
};
