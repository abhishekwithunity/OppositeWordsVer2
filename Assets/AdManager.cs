using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using admob;

public class AdManager : MonoBehaviour
{
    private static AdManager _instance;


    public static AdManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<AdManager>();
            }

            return _instance;
        }
    }
    Admob ad;
    string appID = "ca-app-pub-7880879567842008~2837321958";
    string bannerID = "ca-app-pub-7880879567842008/7131790188";
    string interstitialID = "ca-app-pub-7880879567842008/6940218491";
    string videoID = "ca-app-pub-7880879567842008/9019586921";
    string nativeBannerID = "ca-app-pub-3940256099942544/2247696110";
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
#if UNITY_IOS
        		 appID="ca-app-pub-3940256099942544~1458002511";
				 bannerID="ca-app-pub-3940256099942544/2934735716";
				 interstitialID="ca-app-pub-3940256099942544/4411468910";
				 videoID="ca-app-pub-3940256099942544/1712485313";
				 nativeBannerID = "ca-app-pub-3940256099942544/3986624511";
#elif UNITY_ANDROID
        appID = "ca-app-pub-7880879567842008~2837321958";
        bannerID = "ca-app-pub-7880879567842008/7131790188";
        interstitialID = "ca-app-pub-7880879567842008/6940218491";
        videoID = "ca-app-pub-7880879567842008/9019586921";
        nativeBannerID = "ca-app-pub-3940256099942544/2247696110";
#endif
        AdProperties adProperties = new AdProperties();
        adProperties.isTesting = true;

        ad = Admob.Instance();
        ad.bannerEventHandler += onBannerEvent;
        ad.interstitialEventHandler += onInterstitialEvent;
        ad.rewardedVideoEventHandler += onRewardedVideoEvent;

        ad.initSDK(appID, adProperties);//reqired,adProperties can been null
    }

    public void ShowInterstitial()
    {
        Debug.Log("touch inst button -------------");
        if (ad.isInterstitialReady())
        {
            ad.showInterstitial();
        }
        else
        {
            ad.loadInterstitial(interstitialID);
        }
    }
    public void ShowBanner()
    {
        Admob.Instance().showBannerRelative(bannerID, AdSize.SMART_BANNER, AdPosition.BOTTOM_CENTER);
    }

    public void DestroyBanner()
    {
        Admob.Instance().removeBanner();
    }

    public void ShowRewardedVideo()
    {
        Debug.Log("touch video button -------------");
        if (ad.isRewardedVideoReady())
        {
            ad.showRewardedVideo();
        }
        else
        {
            ad.loadRewardedVideo(videoID);
        }
    }

    void onInterstitialEvent(string eventName, string msg)
    {
        Debug.Log("handler onAdmobEvent---" + eventName + "   " + msg);
        if (eventName == AdmobEvent.onAdLoaded)
        {
            Admob.Instance().showInterstitial();
        }
    }
    void onBannerEvent(string eventName, string msg)
    {
        Debug.Log("handler onAdmobBannerEvent---" + eventName + "   " + msg);
    }
    void onRewardedVideoEvent(string eventName, string msg)
    {
        Debug.Log("handler onRewardedVideoEvent---" + eventName + "  rewarded: " + msg);
        //Give player coins
        int coins = PlayerPrefs.GetInt("coins",0);
        coins += 100;
        PlayerPrefs.SetInt("coins", coins);
    }
}
