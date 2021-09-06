/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 09/03/2021 11:19:09
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=http://192.168.244.195:8080/tours/index.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:2706154374&cup2hreq=4705212f64828dacea59426201d505d026fdc34678011c021e13c0512870ccf7",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:llkgjffcdpffmhiakmfcdcblohccpfmo,pdafiollngonhoadbmdoemagnfpdphbe,obedbbhbpmojnkanicioggnmelmoomoc,jamhcnnkihinmdlkakkaopbjbbcngflc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflookgnkcckhobaglndicnbbgbonegd,cmahhnpholdijhjokonmfdjbfmklppij,aemomkdncapdnfajjbbcbdebjljbpmpj,hfnkpimlhhgieaddgfemjhofmfblmnib,oimompecagnajdejgnnjijobebaeigek,eeigpngbgcognadeebkilcpcaedhellh,ggkkehgbnfjpeggfpleeakpidbkibbmn",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"ping":{"ping_freshness":"{5385c9fd-198e-4360-a5c9-cd765b39315a}","rd":5358},"updatecheck":{},"version":"0.0.0.0"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a"}]},"ping":{"ping_freshness":"{b664487d-00a2-4c6e-b64f-14b920ac6430}","rd":5358},"updatecheck":{},"version":"2021.8.17.1300"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.47b2ab949538dd83ed2b59a3f3feffafb559b55d62a1cd377895a03024c68641"}]},"ping":{"ping_freshness":"{003fdd8e-a039-4e94-b671-568183ef7aad}","rd":5358},"updatecheck":{},"version":"20210817.392344495"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.2a15a17f022bc34e5985d705d39c7beb658c8cdcc250964838fa0d0d9be8e2eb"}]},"ping":{"ping_freshness":"{7195d5b4-03ea-4a1b-b427-eff50ffa22d1}","rd":5358},"updatecheck":{},"version":"95.0.4623.2"},{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:","cohorthint":"M54ToM99","cohortname":"M54ToM99","enabled":true,"packages":{"package":[{"fp":"1.b45fc5f3479dc7b07e8e5822a11785819b7f1c249c9b47dcffcb28edbbc2d706"}]},"ping":{"ping_freshness":"{7eedcd72-f729-4a36-9cdd-059f7eba1bd9}","rd":5358},"updatecheck":{},"version":"9.29.4"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{67d4fcfe-7ddd-4439-8c7b-381459712fb1}","rd":5358},"updatecheck":{},"version":"7"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4"}]},"ping":{"ping_freshness":"{b7d99aba-7a7c-470d-b7be-763efbe8a5f7}","rd":5358},"updatecheck":{},"version":"43"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{eb276d7f-008f-4d3c-9101-d6f8987820be}","rd":5358},"updatecheck":{},"version":"1"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.87a7864f0923c4a98c227e49dff236f257e13f8e046b3fba6c6338ce6439f043"}]},"ping":{"ping_freshness":"{fbb68142-f803-43f0-a39f-18627e33adb6}","rd":5358},"updatecheck":{},"version":"2687"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{1d73f139-9173-41a2-9f02-4c082224472c}","rd":5358},"updatecheck":{},"version":"1.0.6"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{9d2c8fab-de65-4e94-9d7b-5337ba64767c}","rd":5358},"updatecheck":{},"version":"1.0.6.0"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.3ccecd93d50607b948ec968044120c0ec765d6fc060dabc297fed14d28e58cfb"}]},"ping":{"ping_freshness":"{d98bf020-ceea-4fdc-ba74-53396f552090}","rd":5358},"updatecheck":{},"version":"6827"},{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.0727b38159b38ffa3633510444ece15c86417962e8cac59c59002f13b50239ac"}]},"ping":{"ping_freshness":"{84037e46-33d1-4a72-b812-9481035376c6}","rd":5358},"updatecheck":{},"version":"4.10.2209.0"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{56b96366-30a2-4a75-a77b-18d379960535}","rd":5358},"updatecheck":{},"version":"2020.11.2.164946"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.0dc23b37d1fa49e00e0a208bfcb91839be99b9e85162814b05987c2eba1b3701"}]},"ping":{"ping_freshness":"{0c1becde-a113-4543-8678-a586196adcf8}","rd":5358},"updatecheck":{},"version":"2021.8.23.1140"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{a6d325a8-7593-4e12-b977-ac565054a239}","sessionid":"{67c1bfe0-5cd7-4dad-b381-e7e91de0ba68}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);
    ns_page_think_time(1.005);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://192.168.244.195:8080/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username={username}&password={password}&login.x=34&login.y=10&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(14.598);

    //Page Auto split for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://192.168.244.195:8080/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_2");
    ns_web_url ("json_2",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","event":[{"download_time_ms":20852,"downloaded":818385,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"95.0.4631.0","previousversion":"95.0.4623.2","total":818385,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/adhxrtbdrmny27tkg3m4wgwhd6xa_95.0.4631.0/jamhcnnkihinmdlkakkaopbjbbcngflc_95.0.4631.0_all_obd5qk52bhnfhanhgl5h6zq26e.crx3"},{"eventresult":1,"eventtype":3,"nextfp":"1.7ccb4b6b37912d706fd87cf896bfc35ead0f737ddf3ed39033bc5d45cfd521f9","nextversion":"95.0.4631.0","previousfp":"1.2a15a17f022bc34e5985d705d39c7beb658c8cdcc250964838fa0d0d9be8e2eb","previousversion":"95.0.4623.2"}],"version":"95.0.4631.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{cdb05ec4-a824-457b-9a53-f55bb8c51597}","sessionid":"{67c1bfe0-5cd7-4dad-b381-e7e91de0ba68}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_3");
    ns_web_url ("json_3",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"jflookgnkcckhobaglndicnbbgbonegd","event":[{"download_time_ms":8083,"downloaded":4265,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"2688","previousversion":"2687","total":4265,"url":"http://storage.googleapis.com/update-delta/jflookgnkcckhobaglndicnbbgbonegd/2688/2687/ba7c36d722e79e3131856667cfc24a9551c57aeaba67b433d00463f40301508c.crxd"},{"diffresult":1,"eventresult":1,"eventtype":3,"nextfp":"1.6ff757439620e42df323b2471fff6db08165bc16c8be2e9f2718acdb4fcd420d","nextversion":"2688","previousfp":"1.87a7864f0923c4a98c227e49dff236f257e13f8e046b3fba6c6338ce6439f043","previousversion":"2687"}],"version":"2688"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{68cf8623-ccbe-493a-88f7-baf3377293b1}","sessionid":"{67c1bfe0-5cd7-4dad-b381-e7e91de0ba68}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_4");
    ns_web_url ("json_4",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","event":[{"download_time_ms":4023,"downloaded":3144,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"6830","previousversion":"6827","total":3144,"url":"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/6830/6827/e8ee934996f7869fcfb8efa18415a9ddf511bc1b5bfe94715b4e71f6f84635d5.crxd"},{"diffresult":1,"eventresult":1,"eventtype":3,"nextfp":"1.47cbacd98ef24bbff0305d2879fe77c67e6274d7f11c9c8d1c4198eddc378564","nextversion":"6830","previousfp":"1.3ccecd93d50607b948ec968044120c0ec765d6fc060dabc297fed14d28e58cfb","previousversion":"6827"}],"version":"6830"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{5e6e6a20-ed40-440b-9d3e-bbea7b9bd2f1}","sessionid":"{67c1bfe0-5cd7-4dad-b381-e7e91de0ba68}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_4", NS_AUTO_STATUS);
    ns_page_think_time(3.955);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://192.168.244.195:8080/cgi-bin/findflight?depart=Acapulco&departDate=09-04-2021&arrive=Acapulco&returnDate=09-05-2021&numPassengers=1&seatPref=Window&seatType=Coach&findFlights.x=64&findFlights.y=6",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(15.669);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://192.168.244.195:8080/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C09-04-2021&hidden_outboundFlight_button1=001%7C0%7C09-04-2021&hidden_outboundFlight_button2=002%7C0%7C09-04-2021&hidden_outboundFlight_button3=003%7C0%7C09-04-2021&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Window&reserveFlights.x=44&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(27.045);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://192.168.244.195:8080/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=123&expDate=25&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=Window&outboundFlight=000%7C0%7C09-04-2021&advanceDiscount=&buyFlights.x=55&buyFlights.y=14&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/bookanother.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(17.306);

    //Page Auto split for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://192.168.244.195:8080/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://192.168.244.195:8080/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(8.536);

}
