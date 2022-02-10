windowlocation
--------------

### Description

<div>

在 Chrome 瀏覽器內按下 F12，會打開瀏覽器的開發者工具。在 console
當中輸入 `window.location`，會看到一個叫作 `Location`
的結構跑出來，上頭記載了你當前所在的網址所包含的資訊，包含：

-   通訊協定 (protocol)

-   主機名稱 (host)

-   通訊埠 (port)

-   所在路徑 (pathname)

-   查詢字串/Query String (search)

-   識別符號 (hash)

那麼，這些不同的部份是怎麼被切出來的呢？其實網址是有固定格式的，就跟你家的門牌號碼一樣。網址的格式為：

`[通訊協定]://[主機名稱]:[通訊埠]/[所在路徑]?[查詢字串]#[識別符號]`

舉例，`https://www.abc.com/user/12345/photo?from=20180101&to=20201231#favorite`可以被切成：

-   通訊協定 = `https`

-   主機名稱 = `www.abc.com`

-   通訊埠 = 預設不顯示（但因為使用的是 https，所以可知是 443）

-   所在路徑 = `/user/12345/photo`

-   查詢字串 = `?from=20180101&to=20201231`

-   識別符號 = `#favorite`

但也並非所有部份都位同時存在於一個網址中，像是本頁面的網址就沒有查詢字串的部份。

現在，給你一些網址，請你幫忙找出上述的片段，並裝入 `Location` 結構當中。

</div>

### Input

An valid url. Must includes protocol and host part, but port, pathname,
search and hash are not necessarily existing.

### Output

You should put the information parsed from url into the struct passed by
argument. For information not existing in url, if it\'s an integer, set
to 0; if it\'s a string, make it an empty string. Hint: you should
prepare memory storage yourself.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    typedef struct
    {
        char *protocol;
        char *host;
        char *pathname;
        char *search;
        char *hash;
        int port;
    } Location;

    Location *parse_url(char *url);

    int main()
    {
        char url[500] = "";
        fgets(url, 500, stdin); // Get url string
        Location *l = parse_url(url);
        printf("Location {\n  protocol: %s,\n  host: %s,\n", l->protocol, l->host);
        if (l->port)
            printf("  port: %d,\n", l->port);
        else
            printf("  port: (default),\n");
        printf("  pathname: /%s,\n  search: ?%s,\n  hash: #%s,\n}\n", l->pathname, l->search, l->hash);
        return 0;
    }

<div>

### Sample1

#### Input

    https://www.abc.com:80/user/12345/photo?from=20180101&to=20201231#favorite

#### Output

    Location {
      protocol: https,
      host: www.abc.com,
      port: 80,
      pathname: /user/12345/photo,
      search: ?from=20180101&to=20201231,
      hash: #favorite,
    }

</div>

<div>

### Sample2

#### Input

    http://1.2.3.4:443/it/is/a/very/long/path/name

#### Output

    Location {
      protocol: http,
      host: 1.2.3.4,
      port: 443,
      pathname: /it/is/a/very/long/path/name,
      search: ?,
      hash: #,
    }

</div>

<div>

### Sample3

#### Input

    ip://193.55.28.30

#### Output

    Location {
      protocol: ip,
      host: 193.55.28.30,
      port: (default),
      pathname: /,
      search: ?,
      hash: #,
    }

</div>
