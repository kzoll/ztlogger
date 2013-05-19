  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>geoip-api-php/geoip.inc at master · maxmind/geoip-api-php · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="xhr-socket" href="/_sockets" />


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="sYRvdUR2dWhDAQ/pLxF6aDM3/zk6AVgG686j8Ryq4ls=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-d63f89e307e2e357d3b7160b3cd4020463f9bbc1.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-883c2d036f95a0fb486a5d977a84cb0b91a58353.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-92d138f450f2960501e28397a2f63b0f100590f0.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-9514cee43c62b106e5ca1f5cf2107a0c1fad9381.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="69eecf449c3b66a1c0a67e6f1032684b">

        <link data-pjax-transient rel='permalink' href='/maxmind/geoip-api-php/blob/edccc74c06066ff5a962ffcb058a60a9e650937e/geoip.inc'>
    <meta property="og:title" content="geoip-api-php"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/maxmind/geoip-api-php"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/1c1c65b48c46b68c4f6845eb68505e1b?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="geoip-api-php - GeoIP PHP API"/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="maxmind/geoip-api-php"/>

    <meta name="description" content="geoip-api-php - GeoIP PHP API" />


    <meta content="1181834" name="octolytics-dimension-user_id" /><meta content="4718013" name="octolytics-dimension-repository_id" />
  <link href="https://github.com/maxmind/geoip-api-php/commits/master.atom" rel="alternate" title="Recent Commits to geoip-api-php:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob windows vis-public env-production  ">
    <div id="wrapper">

      

      
      
      

      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">Github</a>

    <div class="header-actions">
      <a class="button primary" href="https://github.com/signup">Sign up</a>
      <a class="button" href="https://github.com/login?return_to=%2Fmaxmind%2Fgeoip-api-php%2Fblob%2Fmaster%2Fgeoip.inc">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">


      <ul class="top-nav">
          <li class="explore"><a href="https://github.com/explore">Explore</a></li>
        <li class="features"><a href="https://github.com/features">Features</a></li>
          <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="octicon octicon-gear "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
      data-repo="maxmind/geoip-api-php"
      data-branch="master"
      data-sha="c4dec7709687e583dde7b99e45192e33951d2274"
  >

    <input type="hidden" name="nwo" value="maxmind/geoip-api-php" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

  <div class="divider-vertical"></div>

</form>
    </div>

  </div>
</div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">



    <li>
      <a href="/login?return_to=%2Fmaxmind%2Fgeoip-api-php"
        class="minibutton js-toggler-target star-button entice tooltipped upwards"
        title="You must be signed in to use this feature" rel="nofollow">
        <span class="octicon octicon-star"></span>Star
      </a>
      <a class="social-count js-social-count" href="/maxmind/geoip-api-php/stargazers">
        40
      </a>
    </li>
    <li>
      <a href="/login?return_to=%2Fmaxmind%2Fgeoip-api-php"
        class="minibutton js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-git-branch"></span>Fork
      </a>
      <a href="/maxmind/geoip-api-php/network" class="social-count">
        23
      </a>
    </li>
</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-octicon octicon-repo"></span>
                <span class="author vcard">
                  <a href="/maxmind" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">maxmind</span>
                  </a></span> /
                <strong><a href="/maxmind/geoip-api-php" class="js-current-repository">geoip-api-php</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/maxmind/geoip-api-php/pulse" class="js-selected-navigation-item " data-selected-links="pulse /maxmind/geoip-api-php/pulse" rel="nofollow"><span class="octicon octicon-pulse"></span></a></li>
    <li><a href="/maxmind/geoip-api-php" class="js-selected-navigation-item selected" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /maxmind/geoip-api-php">Code</a></li>
    <li><a href="/maxmind/geoip-api-php/network" class="js-selected-navigation-item " data-selected-links="repo_network /maxmind/geoip-api-php/network">Network</a></li>
    <li><a href="/maxmind/geoip-api-php/pulls" class="js-selected-navigation-item " data-selected-links="repo_pulls /maxmind/geoip-api-php/pulls">Pull Requests <span class='counter'>1</span></a></li>

      <li><a href="/maxmind/geoip-api-php/issues" class="js-selected-navigation-item " data-selected-links="repo_issues /maxmind/geoip-api-php/issues">Issues <span class='counter'>3</span></a></li>



    <li><a href="/maxmind/geoip-api-php/graphs" class="js-selected-navigation-item " data-selected-links="repo_graphs repo_contributors /maxmind/geoip-api-php/graphs">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/maxmind/geoip-api-php/tags" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_tags /maxmind/geoip-api-php/tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="octicon octicon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/maxmind/geoip-api-php/blob/bz/release-1.12/geoip.inc" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="bz/release-1.12" rel="nofollow" title="bz/release-1.12">bz/release-1.12</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/maxmind/geoip-api-php/blob/master/geoip.inc" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/maxmind/geoip-api-php" class="selected js-selected-navigation-item tabnav-tab" data-selected-links="repo_source /maxmind/geoip-api-php">Files</a></li>
    <li><a href="/maxmind/geoip-api-php/commits/master" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_commits /maxmind/geoip-api-php/commits/master">Commits</a></li>
    <li><a href="/maxmind/geoip-api-php/branches" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_branches /maxmind/geoip-api-php/branches" rel="nofollow">Branches <span class="counter ">2</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:9c0733a43ac94ffdc015f558de3c3cc1 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:9c0733a43ac94ffdc015f558de3c3cc1 -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/maxmind/geoip-api-php" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">geoip-api-php</span></a></span></span><span class="separator"> / </span><strong class="final-path">geoip.inc</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="geoip.inc" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/maxmind/geoip-api-php/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/5b3f47d21aa0d797181c8bdff53cc93f?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/borisz" rel="author">borisz</a></span>
    <time class="js-relative-date" datetime="2013-02-07T18:50:04-08:00" title="2013-02-07 18:50:04">February 07, 2013</time>
    <div class="commit-title">
        <a href="/maxmind/geoip-api-php/commit/4313c4eddb5ba63555f88fda0404f2c42f55f6d2" class="message">Add South Sudan</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/5b3f47d21aa0d797181c8bdff53cc93f?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/borisz">borisz</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/maxmind/geoip-api-php/blob/edccc74c06066ff5a962ffcb058a60a9e650937e/geoip.inc" data-title="geoip-api-php/geoip.inc at master · maxmind/geoip-api-php · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>715 lines (668 sloc)</span>
                <span>30.639 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                      <a class="minibutton js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  <a href="/maxmind/geoip-api-php/raw/master/geoip.inc" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/maxmind/geoip-api-php/blame/master/geoip.inc" class="button minibutton ">Blame</a>
                  <a href="/maxmind/geoip-api-php/commits/master/geoip.inc" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-text js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'>&lt;?php</div><div class='line' id='LC2'><br/></div><div class='line' id='LC3'>/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 2 -*- */</div><div class='line' id='LC4'>/* geoip.inc</div><div class='line' id='LC5'>&nbsp;*</div><div class='line' id='LC6'>&nbsp;* Copyright (C) 2007 MaxMind LLC</div><div class='line' id='LC7'>&nbsp;*</div><div class='line' id='LC8'>&nbsp;* This library is free software; you can redistribute it and/or</div><div class='line' id='LC9'>&nbsp;* modify it under the terms of the GNU Lesser General Public</div><div class='line' id='LC10'>&nbsp;* License as published by the Free Software Foundation; either</div><div class='line' id='LC11'>&nbsp;* version 2.1 of the License, or (at your option) any later version.</div><div class='line' id='LC12'>&nbsp;*</div><div class='line' id='LC13'>&nbsp;* This library is distributed in the hope that it will be useful,</div><div class='line' id='LC14'>&nbsp;* but WITHOUT ANY WARRANTY; without even the implied warranty of</div><div class='line' id='LC15'>&nbsp;* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU</div><div class='line' id='LC16'>&nbsp;* Lesser General Public License for more details.</div><div class='line' id='LC17'>&nbsp;*</div><div class='line' id='LC18'>&nbsp;* You should have received a copy of the GNU Lesser General Public</div><div class='line' id='LC19'>&nbsp;* License along with this library; if not, write to the Free Software</div><div class='line' id='LC20'>&nbsp;* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</div><div class='line' id='LC21'>&nbsp;*/</div><div class='line' id='LC22'><br/></div><div class='line' id='LC23'>define(&quot;GEOIP_COUNTRY_BEGIN&quot;, 16776960);</div><div class='line' id='LC24'>define(&quot;GEOIP_STATE_BEGIN_REV0&quot;, 16700000);</div><div class='line' id='LC25'>define(&quot;GEOIP_STATE_BEGIN_REV1&quot;, 16000000);</div><div class='line' id='LC26'>define(&quot;GEOIP_STANDARD&quot;, 0);</div><div class='line' id='LC27'>define(&quot;GEOIP_MEMORY_CACHE&quot;, 1);</div><div class='line' id='LC28'>define(&quot;GEOIP_SHARED_MEMORY&quot;, 2);</div><div class='line' id='LC29'>define(&quot;STRUCTURE_INFO_MAX_SIZE&quot;, 20);</div><div class='line' id='LC30'>define(&quot;DATABASE_INFO_MAX_SIZE&quot;, 100);</div><div class='line' id='LC31'>define(&quot;GEOIP_COUNTRY_EDITION&quot;, 106);</div><div class='line' id='LC32'>define(&quot;GEOIP_PROXY_EDITION&quot;, 8);</div><div class='line' id='LC33'>define(&quot;GEOIP_ASNUM_EDITION&quot;, 9);</div><div class='line' id='LC34'>define(&quot;GEOIP_NETSPEED_EDITION&quot;, 10);</div><div class='line' id='LC35'>define(&quot;GEOIP_REGION_EDITION_REV0&quot;, 112);</div><div class='line' id='LC36'>define(&quot;GEOIP_REGION_EDITION_REV1&quot;, 3);</div><div class='line' id='LC37'>define(&quot;GEOIP_CITY_EDITION_REV0&quot;, 111);</div><div class='line' id='LC38'>define(&quot;GEOIP_CITY_EDITION_REV1&quot;, 2);</div><div class='line' id='LC39'>define(&quot;GEOIP_ORG_EDITION&quot;, 110);</div><div class='line' id='LC40'>define(&quot;GEOIP_ISP_EDITION&quot;, 4);</div><div class='line' id='LC41'>define(&quot;SEGMENT_RECORD_LENGTH&quot;, 3);</div><div class='line' id='LC42'>define(&quot;STANDARD_RECORD_LENGTH&quot;, 3);</div><div class='line' id='LC43'>define(&quot;ORG_RECORD_LENGTH&quot;, 4);</div><div class='line' id='LC44'>define(&quot;MAX_RECORD_LENGTH&quot;, 4);</div><div class='line' id='LC45'>define(&quot;MAX_ORG_RECORD_LENGTH&quot;, 300);</div><div class='line' id='LC46'>define(&quot;GEOIP_SHM_KEY&quot;, 0x4f415401);</div><div class='line' id='LC47'>define(&quot;US_OFFSET&quot;, 1);</div><div class='line' id='LC48'>define(&quot;CANADA_OFFSET&quot;, 677);</div><div class='line' id='LC49'>define(&quot;WORLD_OFFSET&quot;, 1353);</div><div class='line' id='LC50'>define(&quot;FIPS_RANGE&quot;, 360);</div><div class='line' id='LC51'>define(&quot;GEOIP_UNKNOWN_SPEED&quot;, 0);</div><div class='line' id='LC52'>define(&quot;GEOIP_DIALUP_SPEED&quot;, 1);</div><div class='line' id='LC53'>define(&quot;GEOIP_CABLEDSL_SPEED&quot;, 2);</div><div class='line' id='LC54'>define(&quot;GEOIP_CORPORATE_SPEED&quot;, 3);</div><div class='line' id='LC55'>define(&quot;GEOIP_DOMAIN_EDITION&quot;, 11);</div><div class='line' id='LC56'>define(&quot;GEOIP_COUNTRY_EDITION_V6&quot;, 12);</div><div class='line' id='LC57'>define(&quot;GEOIP_LOCATIONA_EDITION&quot;, 13);</div><div class='line' id='LC58'>define(&quot;GEOIP_ACCURACYRADIUS_EDITION&quot;, 14);</div><div class='line' id='LC59'>define(&quot;GEOIP_CITYCOMBINED_EDITION&quot;, 15);</div><div class='line' id='LC60'>define(&quot;GEOIP_CITY_EDITION_REV1_V6&quot;, 30);</div><div class='line' id='LC61'>define(&quot;GEOIP_CITY_EDITION_REV0_V6&quot;,31);</div><div class='line' id='LC62'>define(&quot;GEOIP_NETSPEED_EDITION_REV1&quot;,32);</div><div class='line' id='LC63'>define(&quot;GEOIP_NETSPEED_EDITION_REV1_V6&quot;,33);</div><div class='line' id='LC64'>define(&quot;GEOIP_USERTYPE_EDITION&quot;,28);</div><div class='line' id='LC65'>define(&quot;GEOIP_USERTYPE_EDITION_V6&quot;,29);</div><div class='line' id='LC66'>define(&quot;GEOIP_ASNUM_EDITION_V6&quot;,21);</div><div class='line' id='LC67'>define(&quot;GEOIP_ISP_EDITION_V6&quot;,22);</div><div class='line' id='LC68'>define(&quot;GEOIP_ORG_EDITION_V6&quot;,23);</div><div class='line' id='LC69'>define(&quot;GEOIP_DOMAIN_EDITION_V6&quot;,24);</div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'>define(&quot;CITYCOMBINED_FIXED_RECORD&quot;, 7 );</div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'>class GeoIP {</div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;var $flags;</div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;var $filehandle;</div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;var $memory_buffer;</div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;var $databaseType;</div><div class='line' id='LC78'>&nbsp;&nbsp;&nbsp;&nbsp;var $databaseSegments;</div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;var $record_length;</div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;var $shmid;</div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;var $GEOIP_COUNTRY_CODE_TO_NUMBER = array(</div><div class='line' id='LC82'>&quot;&quot; =&gt; 0, &quot;AP&quot; =&gt; 1, &quot;EU&quot; =&gt; 2, &quot;AD&quot; =&gt; 3, &quot;AE&quot; =&gt; 4, &quot;AF&quot; =&gt; 5,</div><div class='line' id='LC83'>&quot;AG&quot; =&gt; 6, &quot;AI&quot; =&gt; 7, &quot;AL&quot; =&gt; 8, &quot;AM&quot; =&gt; 9, &quot;CW&quot; =&gt; 10, &quot;AO&quot; =&gt; 11,</div><div class='line' id='LC84'>&quot;AQ&quot; =&gt; 12, &quot;AR&quot; =&gt; 13, &quot;AS&quot; =&gt; 14, &quot;AT&quot; =&gt; 15, &quot;AU&quot; =&gt; 16, &quot;AW&quot; =&gt; 17,</div><div class='line' id='LC85'>&quot;AZ&quot; =&gt; 18, &quot;BA&quot; =&gt; 19, &quot;BB&quot; =&gt; 20, &quot;BD&quot; =&gt; 21, &quot;BE&quot; =&gt; 22, &quot;BF&quot; =&gt; 23,</div><div class='line' id='LC86'>&quot;BG&quot; =&gt; 24, &quot;BH&quot; =&gt; 25, &quot;BI&quot; =&gt; 26, &quot;BJ&quot; =&gt; 27, &quot;BM&quot; =&gt; 28, &quot;BN&quot; =&gt; 29,</div><div class='line' id='LC87'>&quot;BO&quot; =&gt; 30, &quot;BR&quot; =&gt; 31, &quot;BS&quot; =&gt; 32, &quot;BT&quot; =&gt; 33, &quot;BV&quot; =&gt; 34, &quot;BW&quot; =&gt; 35,</div><div class='line' id='LC88'>&quot;BY&quot; =&gt; 36, &quot;BZ&quot; =&gt; 37, &quot;CA&quot; =&gt; 38, &quot;CC&quot; =&gt; 39, &quot;CD&quot; =&gt; 40, &quot;CF&quot; =&gt; 41,</div><div class='line' id='LC89'>&quot;CG&quot; =&gt; 42, &quot;CH&quot; =&gt; 43, &quot;CI&quot; =&gt; 44, &quot;CK&quot; =&gt; 45, &quot;CL&quot; =&gt; 46, &quot;CM&quot; =&gt; 47,</div><div class='line' id='LC90'>&quot;CN&quot; =&gt; 48, &quot;CO&quot; =&gt; 49, &quot;CR&quot; =&gt; 50, &quot;CU&quot; =&gt; 51, &quot;CV&quot; =&gt; 52, &quot;CX&quot; =&gt; 53,</div><div class='line' id='LC91'>&quot;CY&quot; =&gt; 54, &quot;CZ&quot; =&gt; 55, &quot;DE&quot; =&gt; 56, &quot;DJ&quot; =&gt; 57, &quot;DK&quot; =&gt; 58, &quot;DM&quot; =&gt; 59,</div><div class='line' id='LC92'>&quot;DO&quot; =&gt; 60, &quot;DZ&quot; =&gt; 61, &quot;EC&quot; =&gt; 62, &quot;EE&quot; =&gt; 63, &quot;EG&quot; =&gt; 64, &quot;EH&quot; =&gt; 65,</div><div class='line' id='LC93'>&quot;ER&quot; =&gt; 66, &quot;ES&quot; =&gt; 67, &quot;ET&quot; =&gt; 68, &quot;FI&quot; =&gt; 69, &quot;FJ&quot; =&gt; 70, &quot;FK&quot; =&gt; 71,</div><div class='line' id='LC94'>&quot;FM&quot; =&gt; 72, &quot;FO&quot; =&gt; 73, &quot;FR&quot; =&gt; 74, &quot;SX&quot; =&gt; 75, &quot;GA&quot; =&gt; 76, &quot;GB&quot; =&gt; 77,</div><div class='line' id='LC95'>&quot;GD&quot; =&gt; 78, &quot;GE&quot; =&gt; 79, &quot;GF&quot; =&gt; 80, &quot;GH&quot; =&gt; 81, &quot;GI&quot; =&gt; 82, &quot;GL&quot; =&gt; 83,</div><div class='line' id='LC96'>&quot;GM&quot; =&gt; 84, &quot;GN&quot; =&gt; 85, &quot;GP&quot; =&gt; 86, &quot;GQ&quot; =&gt; 87, &quot;GR&quot; =&gt; 88, &quot;GS&quot; =&gt; 89,</div><div class='line' id='LC97'>&quot;GT&quot; =&gt; 90, &quot;GU&quot; =&gt; 91, &quot;GW&quot; =&gt; 92, &quot;GY&quot; =&gt; 93, &quot;HK&quot; =&gt; 94, &quot;HM&quot; =&gt; 95,</div><div class='line' id='LC98'>&quot;HN&quot; =&gt; 96, &quot;HR&quot; =&gt; 97, &quot;HT&quot; =&gt; 98, &quot;HU&quot; =&gt; 99, &quot;ID&quot; =&gt; 100, &quot;IE&quot; =&gt; 101,</div><div class='line' id='LC99'>&quot;IL&quot; =&gt; 102, &quot;IN&quot; =&gt; 103, &quot;IO&quot; =&gt; 104, &quot;IQ&quot; =&gt; 105, &quot;IR&quot; =&gt; 106, &quot;IS&quot; =&gt; 107,</div><div class='line' id='LC100'>&quot;IT&quot; =&gt; 108, &quot;JM&quot; =&gt; 109, &quot;JO&quot; =&gt; 110, &quot;JP&quot; =&gt; 111, &quot;KE&quot; =&gt; 112, &quot;KG&quot; =&gt; 113,</div><div class='line' id='LC101'>&quot;KH&quot; =&gt; 114, &quot;KI&quot; =&gt; 115, &quot;KM&quot; =&gt; 116, &quot;KN&quot; =&gt; 117, &quot;KP&quot; =&gt; 118, &quot;KR&quot; =&gt; 119,</div><div class='line' id='LC102'>&quot;KW&quot; =&gt; 120, &quot;KY&quot; =&gt; 121, &quot;KZ&quot; =&gt; 122, &quot;LA&quot; =&gt; 123, &quot;LB&quot; =&gt; 124, &quot;LC&quot; =&gt; 125,</div><div class='line' id='LC103'>&quot;LI&quot; =&gt; 126, &quot;LK&quot; =&gt; 127, &quot;LR&quot; =&gt; 128, &quot;LS&quot; =&gt; 129, &quot;LT&quot; =&gt; 130, &quot;LU&quot; =&gt; 131,</div><div class='line' id='LC104'>&quot;LV&quot; =&gt; 132, &quot;LY&quot; =&gt; 133, &quot;MA&quot; =&gt; 134, &quot;MC&quot; =&gt; 135, &quot;MD&quot; =&gt; 136, &quot;MG&quot; =&gt; 137,</div><div class='line' id='LC105'>&quot;MH&quot; =&gt; 138, &quot;MK&quot; =&gt; 139, &quot;ML&quot; =&gt; 140, &quot;MM&quot; =&gt; 141, &quot;MN&quot; =&gt; 142, &quot;MO&quot; =&gt; 143,</div><div class='line' id='LC106'>&quot;MP&quot; =&gt; 144, &quot;MQ&quot; =&gt; 145, &quot;MR&quot; =&gt; 146, &quot;MS&quot; =&gt; 147, &quot;MT&quot; =&gt; 148, &quot;MU&quot; =&gt; 149,</div><div class='line' id='LC107'>&quot;MV&quot; =&gt; 150, &quot;MW&quot; =&gt; 151, &quot;MX&quot; =&gt; 152, &quot;MY&quot; =&gt; 153, &quot;MZ&quot; =&gt; 154, &quot;NA&quot; =&gt; 155,</div><div class='line' id='LC108'>&quot;NC&quot; =&gt; 156, &quot;NE&quot; =&gt; 157, &quot;NF&quot; =&gt; 158, &quot;NG&quot; =&gt; 159, &quot;NI&quot; =&gt; 160, &quot;NL&quot; =&gt; 161,</div><div class='line' id='LC109'>&quot;NO&quot; =&gt; 162, &quot;NP&quot; =&gt; 163, &quot;NR&quot; =&gt; 164, &quot;NU&quot; =&gt; 165, &quot;NZ&quot; =&gt; 166, &quot;OM&quot; =&gt; 167,</div><div class='line' id='LC110'>&quot;PA&quot; =&gt; 168, &quot;PE&quot; =&gt; 169, &quot;PF&quot; =&gt; 170, &quot;PG&quot; =&gt; 171, &quot;PH&quot; =&gt; 172, &quot;PK&quot; =&gt; 173,</div><div class='line' id='LC111'>&quot;PL&quot; =&gt; 174, &quot;PM&quot; =&gt; 175, &quot;PN&quot; =&gt; 176, &quot;PR&quot; =&gt; 177, &quot;PS&quot; =&gt; 178, &quot;PT&quot; =&gt; 179,</div><div class='line' id='LC112'>&quot;PW&quot; =&gt; 180, &quot;PY&quot; =&gt; 181, &quot;QA&quot; =&gt; 182, &quot;RE&quot; =&gt; 183, &quot;RO&quot; =&gt; 184, &quot;RU&quot; =&gt; 185,</div><div class='line' id='LC113'>&quot;RW&quot; =&gt; 186, &quot;SA&quot; =&gt; 187, &quot;SB&quot; =&gt; 188, &quot;SC&quot; =&gt; 189, &quot;SD&quot; =&gt; 190, &quot;SE&quot; =&gt; 191,</div><div class='line' id='LC114'>&quot;SG&quot; =&gt; 192, &quot;SH&quot; =&gt; 193, &quot;SI&quot; =&gt; 194, &quot;SJ&quot; =&gt; 195, &quot;SK&quot; =&gt; 196, &quot;SL&quot; =&gt; 197,</div><div class='line' id='LC115'>&quot;SM&quot; =&gt; 198, &quot;SN&quot; =&gt; 199, &quot;SO&quot; =&gt; 200, &quot;SR&quot; =&gt; 201, &quot;ST&quot; =&gt; 202, &quot;SV&quot; =&gt; 203,</div><div class='line' id='LC116'>&quot;SY&quot; =&gt; 204, &quot;SZ&quot; =&gt; 205, &quot;TC&quot; =&gt; 206, &quot;TD&quot; =&gt; 207, &quot;TF&quot; =&gt; 208, &quot;TG&quot; =&gt; 209,</div><div class='line' id='LC117'>&quot;TH&quot; =&gt; 210, &quot;TJ&quot; =&gt; 211, &quot;TK&quot; =&gt; 212, &quot;TM&quot; =&gt; 213, &quot;TN&quot; =&gt; 214, &quot;TO&quot; =&gt; 215,</div><div class='line' id='LC118'>&quot;TL&quot; =&gt; 216, &quot;TR&quot; =&gt; 217, &quot;TT&quot; =&gt; 218, &quot;TV&quot; =&gt; 219, &quot;TW&quot; =&gt; 220, &quot;TZ&quot; =&gt; 221,</div><div class='line' id='LC119'>&quot;UA&quot; =&gt; 222, &quot;UG&quot; =&gt; 223, &quot;UM&quot; =&gt; 224, &quot;US&quot; =&gt; 225, &quot;UY&quot; =&gt; 226, &quot;UZ&quot; =&gt; 227,</div><div class='line' id='LC120'>&quot;VA&quot; =&gt; 228, &quot;VC&quot; =&gt; 229, &quot;VE&quot; =&gt; 230, &quot;VG&quot; =&gt; 231, &quot;VI&quot; =&gt; 232, &quot;VN&quot; =&gt; 233,</div><div class='line' id='LC121'>&quot;VU&quot; =&gt; 234, &quot;WF&quot; =&gt; 235, &quot;WS&quot; =&gt; 236, &quot;YE&quot; =&gt; 237, &quot;YT&quot; =&gt; 238, &quot;RS&quot; =&gt; 239,</div><div class='line' id='LC122'>&quot;ZA&quot; =&gt; 240, &quot;ZM&quot; =&gt; 241, &quot;ME&quot; =&gt; 242, &quot;ZW&quot; =&gt; 243, &quot;A1&quot; =&gt; 244, &quot;A2&quot; =&gt; 245,</div><div class='line' id='LC123'>&quot;O1&quot; =&gt; 246, &quot;AX&quot; =&gt; 247, &quot;GG&quot; =&gt; 248, &quot;IM&quot; =&gt; 249, &quot;JE&quot; =&gt; 250, &quot;BL&quot; =&gt; 251,</div><div class='line' id='LC124'>&quot;MF&quot; =&gt; 252, &quot;BQ&quot; =&gt; 253, &quot;SS&quot; =&gt; 254, &quot;O1&quot; =&gt; 255</div><div class='line' id='LC125'>);</div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;var $GEOIP_COUNTRY_CODES = array(</div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;&quot;,&quot;AP&quot;,&quot;EU&quot;,&quot;AD&quot;,&quot;AE&quot;,&quot;AF&quot;,&quot;AG&quot;,&quot;AI&quot;,&quot;AL&quot;,&quot;AM&quot;,&quot;CW&quot;,</div><div class='line' id='LC128'>	&quot;AO&quot;,&quot;AQ&quot;,&quot;AR&quot;,&quot;AS&quot;,&quot;AT&quot;,&quot;AU&quot;,&quot;AW&quot;,&quot;AZ&quot;,&quot;BA&quot;,&quot;BB&quot;,</div><div class='line' id='LC129'>	&quot;BD&quot;,&quot;BE&quot;,&quot;BF&quot;,&quot;BG&quot;,&quot;BH&quot;,&quot;BI&quot;,&quot;BJ&quot;,&quot;BM&quot;,&quot;BN&quot;,&quot;BO&quot;,</div><div class='line' id='LC130'>	&quot;BR&quot;,&quot;BS&quot;,&quot;BT&quot;,&quot;BV&quot;,&quot;BW&quot;,&quot;BY&quot;,&quot;BZ&quot;,&quot;CA&quot;,&quot;CC&quot;,&quot;CD&quot;,</div><div class='line' id='LC131'>	&quot;CF&quot;,&quot;CG&quot;,&quot;CH&quot;,&quot;CI&quot;,&quot;CK&quot;,&quot;CL&quot;,&quot;CM&quot;,&quot;CN&quot;,&quot;CO&quot;,&quot;CR&quot;,</div><div class='line' id='LC132'>	&quot;CU&quot;,&quot;CV&quot;,&quot;CX&quot;,&quot;CY&quot;,&quot;CZ&quot;,&quot;DE&quot;,&quot;DJ&quot;,&quot;DK&quot;,&quot;DM&quot;,&quot;DO&quot;,</div><div class='line' id='LC133'>	&quot;DZ&quot;,&quot;EC&quot;,&quot;EE&quot;,&quot;EG&quot;,&quot;EH&quot;,&quot;ER&quot;,&quot;ES&quot;,&quot;ET&quot;,&quot;FI&quot;,&quot;FJ&quot;,</div><div class='line' id='LC134'>	&quot;FK&quot;,&quot;FM&quot;,&quot;FO&quot;,&quot;FR&quot;,&quot;SX&quot;,&quot;GA&quot;,&quot;GB&quot;,&quot;GD&quot;,&quot;GE&quot;,&quot;GF&quot;,</div><div class='line' id='LC135'>	&quot;GH&quot;,&quot;GI&quot;,&quot;GL&quot;,&quot;GM&quot;,&quot;GN&quot;,&quot;GP&quot;,&quot;GQ&quot;,&quot;GR&quot;,&quot;GS&quot;,&quot;GT&quot;,</div><div class='line' id='LC136'>	&quot;GU&quot;,&quot;GW&quot;,&quot;GY&quot;,&quot;HK&quot;,&quot;HM&quot;,&quot;HN&quot;,&quot;HR&quot;,&quot;HT&quot;,&quot;HU&quot;,&quot;ID&quot;,</div><div class='line' id='LC137'>	&quot;IE&quot;,&quot;IL&quot;,&quot;IN&quot;,&quot;IO&quot;,&quot;IQ&quot;,&quot;IR&quot;,&quot;IS&quot;,&quot;IT&quot;,&quot;JM&quot;,&quot;JO&quot;,</div><div class='line' id='LC138'>	&quot;JP&quot;,&quot;KE&quot;,&quot;KG&quot;,&quot;KH&quot;,&quot;KI&quot;,&quot;KM&quot;,&quot;KN&quot;,&quot;KP&quot;,&quot;KR&quot;,&quot;KW&quot;,</div><div class='line' id='LC139'>	&quot;KY&quot;,&quot;KZ&quot;,&quot;LA&quot;,&quot;LB&quot;,&quot;LC&quot;,&quot;LI&quot;,&quot;LK&quot;,&quot;LR&quot;,&quot;LS&quot;,&quot;LT&quot;,</div><div class='line' id='LC140'>	&quot;LU&quot;,&quot;LV&quot;,&quot;LY&quot;,&quot;MA&quot;,&quot;MC&quot;,&quot;MD&quot;,&quot;MG&quot;,&quot;MH&quot;,&quot;MK&quot;,&quot;ML&quot;,</div><div class='line' id='LC141'>	&quot;MM&quot;,&quot;MN&quot;,&quot;MO&quot;,&quot;MP&quot;,&quot;MQ&quot;,&quot;MR&quot;,&quot;MS&quot;,&quot;MT&quot;,&quot;MU&quot;,&quot;MV&quot;,</div><div class='line' id='LC142'>	&quot;MW&quot;,&quot;MX&quot;,&quot;MY&quot;,&quot;MZ&quot;,&quot;NA&quot;,&quot;NC&quot;,&quot;NE&quot;,&quot;NF&quot;,&quot;NG&quot;,&quot;NI&quot;,</div><div class='line' id='LC143'>	&quot;NL&quot;,&quot;NO&quot;,&quot;NP&quot;,&quot;NR&quot;,&quot;NU&quot;,&quot;NZ&quot;,&quot;OM&quot;,&quot;PA&quot;,&quot;PE&quot;,&quot;PF&quot;,</div><div class='line' id='LC144'>	&quot;PG&quot;,&quot;PH&quot;,&quot;PK&quot;,&quot;PL&quot;,&quot;PM&quot;,&quot;PN&quot;,&quot;PR&quot;,&quot;PS&quot;,&quot;PT&quot;,&quot;PW&quot;,</div><div class='line' id='LC145'>	&quot;PY&quot;,&quot;QA&quot;,&quot;RE&quot;,&quot;RO&quot;,&quot;RU&quot;,&quot;RW&quot;,&quot;SA&quot;,&quot;SB&quot;,&quot;SC&quot;,&quot;SD&quot;,</div><div class='line' id='LC146'>	&quot;SE&quot;,&quot;SG&quot;,&quot;SH&quot;,&quot;SI&quot;,&quot;SJ&quot;,&quot;SK&quot;,&quot;SL&quot;,&quot;SM&quot;,&quot;SN&quot;,&quot;SO&quot;,</div><div class='line' id='LC147'>	&quot;SR&quot;,&quot;ST&quot;,&quot;SV&quot;,&quot;SY&quot;,&quot;SZ&quot;,&quot;TC&quot;,&quot;TD&quot;,&quot;TF&quot;,&quot;TG&quot;,&quot;TH&quot;,</div><div class='line' id='LC148'>	&quot;TJ&quot;,&quot;TK&quot;,&quot;TM&quot;,&quot;TN&quot;,&quot;TO&quot;,&quot;TL&quot;,&quot;TR&quot;,&quot;TT&quot;,&quot;TV&quot;,&quot;TW&quot;,</div><div class='line' id='LC149'>	&quot;TZ&quot;,&quot;UA&quot;,&quot;UG&quot;,&quot;UM&quot;,&quot;US&quot;,&quot;UY&quot;,&quot;UZ&quot;,&quot;VA&quot;,&quot;VC&quot;,&quot;VE&quot;,</div><div class='line' id='LC150'>	&quot;VG&quot;,&quot;VI&quot;,&quot;VN&quot;,&quot;VU&quot;,&quot;WF&quot;,&quot;WS&quot;,&quot;YE&quot;,&quot;YT&quot;,&quot;RS&quot;,&quot;ZA&quot;,</div><div class='line' id='LC151'>	&quot;ZM&quot;,&quot;ME&quot;,&quot;ZW&quot;,&quot;A1&quot;,&quot;A2&quot;,&quot;O1&quot;,&quot;AX&quot;,&quot;GG&quot;,&quot;IM&quot;,&quot;JE&quot;,</div><div class='line' id='LC152'>&nbsp;&nbsp;&quot;BL&quot;,&quot;MF&quot;, &quot;BQ&quot;, &quot;SS&quot;, &quot;O1&quot; );</div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;var $GEOIP_COUNTRY_CODES3 = array(</div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;&quot;,&quot;AP&quot;,&quot;EU&quot;,&quot;AND&quot;,&quot;ARE&quot;,&quot;AFG&quot;,&quot;ATG&quot;,&quot;AIA&quot;,&quot;ALB&quot;,&quot;ARM&quot;,&quot;CUW&quot;,</div><div class='line' id='LC155'>	&quot;AGO&quot;,&quot;ATA&quot;,&quot;ARG&quot;,&quot;ASM&quot;,&quot;AUT&quot;,&quot;AUS&quot;,&quot;ABW&quot;,&quot;AZE&quot;,&quot;BIH&quot;,&quot;BRB&quot;,</div><div class='line' id='LC156'>	&quot;BGD&quot;,&quot;BEL&quot;,&quot;BFA&quot;,&quot;BGR&quot;,&quot;BHR&quot;,&quot;BDI&quot;,&quot;BEN&quot;,&quot;BMU&quot;,&quot;BRN&quot;,&quot;BOL&quot;,</div><div class='line' id='LC157'>	&quot;BRA&quot;,&quot;BHS&quot;,&quot;BTN&quot;,&quot;BVT&quot;,&quot;BWA&quot;,&quot;BLR&quot;,&quot;BLZ&quot;,&quot;CAN&quot;,&quot;CCK&quot;,&quot;COD&quot;,</div><div class='line' id='LC158'>	&quot;CAF&quot;,&quot;COG&quot;,&quot;CHE&quot;,&quot;CIV&quot;,&quot;COK&quot;,&quot;CHL&quot;,&quot;CMR&quot;,&quot;CHN&quot;,&quot;COL&quot;,&quot;CRI&quot;,</div><div class='line' id='LC159'>	&quot;CUB&quot;,&quot;CPV&quot;,&quot;CXR&quot;,&quot;CYP&quot;,&quot;CZE&quot;,&quot;DEU&quot;,&quot;DJI&quot;,&quot;DNK&quot;,&quot;DMA&quot;,&quot;DOM&quot;,</div><div class='line' id='LC160'>	&quot;DZA&quot;,&quot;ECU&quot;,&quot;EST&quot;,&quot;EGY&quot;,&quot;ESH&quot;,&quot;ERI&quot;,&quot;ESP&quot;,&quot;ETH&quot;,&quot;FIN&quot;,&quot;FJI&quot;,</div><div class='line' id='LC161'>	&quot;FLK&quot;,&quot;FSM&quot;,&quot;FRO&quot;,&quot;FRA&quot;,&quot;SXM&quot;,&quot;GAB&quot;,&quot;GBR&quot;,&quot;GRD&quot;,&quot;GEO&quot;,&quot;GUF&quot;,</div><div class='line' id='LC162'>	&quot;GHA&quot;,&quot;GIB&quot;,&quot;GRL&quot;,&quot;GMB&quot;,&quot;GIN&quot;,&quot;GLP&quot;,&quot;GNQ&quot;,&quot;GRC&quot;,&quot;SGS&quot;,&quot;GTM&quot;,</div><div class='line' id='LC163'>	&quot;GUM&quot;,&quot;GNB&quot;,&quot;GUY&quot;,&quot;HKG&quot;,&quot;HMD&quot;,&quot;HND&quot;,&quot;HRV&quot;,&quot;HTI&quot;,&quot;HUN&quot;,&quot;IDN&quot;,</div><div class='line' id='LC164'>	&quot;IRL&quot;,&quot;ISR&quot;,&quot;IND&quot;,&quot;IOT&quot;,&quot;IRQ&quot;,&quot;IRN&quot;,&quot;ISL&quot;,&quot;ITA&quot;,&quot;JAM&quot;,&quot;JOR&quot;,</div><div class='line' id='LC165'>	&quot;JPN&quot;,&quot;KEN&quot;,&quot;KGZ&quot;,&quot;KHM&quot;,&quot;KIR&quot;,&quot;COM&quot;,&quot;KNA&quot;,&quot;PRK&quot;,&quot;KOR&quot;,&quot;KWT&quot;,</div><div class='line' id='LC166'>	&quot;CYM&quot;,&quot;KAZ&quot;,&quot;LAO&quot;,&quot;LBN&quot;,&quot;LCA&quot;,&quot;LIE&quot;,&quot;LKA&quot;,&quot;LBR&quot;,&quot;LSO&quot;,&quot;LTU&quot;,</div><div class='line' id='LC167'>	&quot;LUX&quot;,&quot;LVA&quot;,&quot;LBY&quot;,&quot;MAR&quot;,&quot;MCO&quot;,&quot;MDA&quot;,&quot;MDG&quot;,&quot;MHL&quot;,&quot;MKD&quot;,&quot;MLI&quot;,</div><div class='line' id='LC168'>	&quot;MMR&quot;,&quot;MNG&quot;,&quot;MAC&quot;,&quot;MNP&quot;,&quot;MTQ&quot;,&quot;MRT&quot;,&quot;MSR&quot;,&quot;MLT&quot;,&quot;MUS&quot;,&quot;MDV&quot;,</div><div class='line' id='LC169'>	&quot;MWI&quot;,&quot;MEX&quot;,&quot;MYS&quot;,&quot;MOZ&quot;,&quot;NAM&quot;,&quot;NCL&quot;,&quot;NER&quot;,&quot;NFK&quot;,&quot;NGA&quot;,&quot;NIC&quot;,</div><div class='line' id='LC170'>	&quot;NLD&quot;,&quot;NOR&quot;,&quot;NPL&quot;,&quot;NRU&quot;,&quot;NIU&quot;,&quot;NZL&quot;,&quot;OMN&quot;,&quot;PAN&quot;,&quot;PER&quot;,&quot;PYF&quot;,</div><div class='line' id='LC171'>	&quot;PNG&quot;,&quot;PHL&quot;,&quot;PAK&quot;,&quot;POL&quot;,&quot;SPM&quot;,&quot;PCN&quot;,&quot;PRI&quot;,&quot;PSE&quot;,&quot;PRT&quot;,&quot;PLW&quot;,</div><div class='line' id='LC172'>	&quot;PRY&quot;,&quot;QAT&quot;,&quot;REU&quot;,&quot;ROU&quot;,&quot;RUS&quot;,&quot;RWA&quot;,&quot;SAU&quot;,&quot;SLB&quot;,&quot;SYC&quot;,&quot;SDN&quot;,</div><div class='line' id='LC173'>	&quot;SWE&quot;,&quot;SGP&quot;,&quot;SHN&quot;,&quot;SVN&quot;,&quot;SJM&quot;,&quot;SVK&quot;,&quot;SLE&quot;,&quot;SMR&quot;,&quot;SEN&quot;,&quot;SOM&quot;,</div><div class='line' id='LC174'>	&quot;SUR&quot;,&quot;STP&quot;,&quot;SLV&quot;,&quot;SYR&quot;,&quot;SWZ&quot;,&quot;TCA&quot;,&quot;TCD&quot;,&quot;ATF&quot;,&quot;TGO&quot;,&quot;THA&quot;,</div><div class='line' id='LC175'>	&quot;TJK&quot;,&quot;TKL&quot;,&quot;TKM&quot;,&quot;TUN&quot;,&quot;TON&quot;,&quot;TLS&quot;,&quot;TUR&quot;,&quot;TTO&quot;,&quot;TUV&quot;,&quot;TWN&quot;,</div><div class='line' id='LC176'>	&quot;TZA&quot;,&quot;UKR&quot;,&quot;UGA&quot;,&quot;UMI&quot;,&quot;USA&quot;,&quot;URY&quot;,&quot;UZB&quot;,&quot;VAT&quot;,&quot;VCT&quot;,&quot;VEN&quot;,</div><div class='line' id='LC177'>	&quot;VGB&quot;,&quot;VIR&quot;,&quot;VNM&quot;,&quot;VUT&quot;,&quot;WLF&quot;,&quot;WSM&quot;,&quot;YEM&quot;,&quot;MYT&quot;,&quot;SRB&quot;,&quot;ZAF&quot;,</div><div class='line' id='LC178'>	&quot;ZMB&quot;,&quot;MNE&quot;,&quot;ZWE&quot;,&quot;A1&quot;,&quot;A2&quot;,&quot;O1&quot;,&quot;ALA&quot;,&quot;GGY&quot;,&quot;IMN&quot;,&quot;JEY&quot;,</div><div class='line' id='LC179'>&nbsp;&nbsp;&quot;BLM&quot;,&quot;MAF&quot;, &quot;BES&quot;, &quot;SSD&quot;, &quot;O1&quot;</div><div class='line' id='LC180'>&nbsp;&nbsp;);</div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;var $GEOIP_COUNTRY_NAMES = array(</div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&quot;&quot;,&quot;Asia/Pacific Region&quot;,&quot;Europe&quot;,&quot;Andorra&quot;,&quot;United Arab Emirates&quot;,&quot;Afghanistan&quot;,&quot;Antigua and Barbuda&quot;,&quot;Anguilla&quot;,&quot;Albania&quot;,&quot;Armenia&quot;,&quot;Curacao&quot;,</div><div class='line' id='LC183'>	&quot;Angola&quot;,&quot;Antarctica&quot;,&quot;Argentina&quot;,&quot;American Samoa&quot;,&quot;Austria&quot;,&quot;Australia&quot;,&quot;Aruba&quot;,&quot;Azerbaijan&quot;,&quot;Bosnia and Herzegovina&quot;,&quot;Barbados&quot;,</div><div class='line' id='LC184'>	&quot;Bangladesh&quot;,&quot;Belgium&quot;,&quot;Burkina Faso&quot;,&quot;Bulgaria&quot;,&quot;Bahrain&quot;,&quot;Burundi&quot;,&quot;Benin&quot;,&quot;Bermuda&quot;,&quot;Brunei Darussalam&quot;,&quot;Bolivia&quot;,</div><div class='line' id='LC185'>	&quot;Brazil&quot;,&quot;Bahamas&quot;,&quot;Bhutan&quot;,&quot;Bouvet Island&quot;,&quot;Botswana&quot;,&quot;Belarus&quot;,&quot;Belize&quot;,&quot;Canada&quot;,&quot;Cocos (Keeling) Islands&quot;,&quot;Congo, The Democratic Republic of the&quot;,</div><div class='line' id='LC186'>	&quot;Central African Republic&quot;,&quot;Congo&quot;,&quot;Switzerland&quot;,&quot;Cote D&#39;Ivoire&quot;,&quot;Cook Islands&quot;,&quot;Chile&quot;,&quot;Cameroon&quot;,&quot;China&quot;,&quot;Colombia&quot;,&quot;Costa Rica&quot;,</div><div class='line' id='LC187'>	&quot;Cuba&quot;,&quot;Cape Verde&quot;,&quot;Christmas Island&quot;,&quot;Cyprus&quot;,&quot;Czech Republic&quot;,&quot;Germany&quot;,&quot;Djibouti&quot;,&quot;Denmark&quot;,&quot;Dominica&quot;,&quot;Dominican Republic&quot;,</div><div class='line' id='LC188'>	&quot;Algeria&quot;,&quot;Ecuador&quot;,&quot;Estonia&quot;,&quot;Egypt&quot;,&quot;Western Sahara&quot;,&quot;Eritrea&quot;,&quot;Spain&quot;,&quot;Ethiopia&quot;,&quot;Finland&quot;,&quot;Fiji&quot;,</div><div class='line' id='LC189'>	&quot;Falkland Islands (Malvinas)&quot;,&quot;Micronesia, Federated States of&quot;,&quot;Faroe Islands&quot;,&quot;France&quot;,&quot;Sint Maarten (Dutch part)&quot;,&quot;Gabon&quot;,&quot;United Kingdom&quot;,&quot;Grenada&quot;,&quot;Georgia&quot;,&quot;French Guiana&quot;,</div><div class='line' id='LC190'>	&quot;Ghana&quot;,&quot;Gibraltar&quot;,&quot;Greenland&quot;,&quot;Gambia&quot;,&quot;Guinea&quot;,&quot;Guadeloupe&quot;,&quot;Equatorial Guinea&quot;,&quot;Greece&quot;,&quot;South Georgia and the South Sandwich Islands&quot;,&quot;Guatemala&quot;,</div><div class='line' id='LC191'>	&quot;Guam&quot;,&quot;Guinea-Bissau&quot;,&quot;Guyana&quot;,&quot;Hong Kong&quot;,&quot;Heard Island and McDonald Islands&quot;,&quot;Honduras&quot;,&quot;Croatia&quot;,&quot;Haiti&quot;,&quot;Hungary&quot;,&quot;Indonesia&quot;,</div><div class='line' id='LC192'>	&quot;Ireland&quot;,&quot;Israel&quot;,&quot;India&quot;,&quot;British Indian Ocean Territory&quot;,&quot;Iraq&quot;,&quot;Iran, Islamic Republic of&quot;,&quot;Iceland&quot;,&quot;Italy&quot;,&quot;Jamaica&quot;,&quot;Jordan&quot;,</div><div class='line' id='LC193'>	&quot;Japan&quot;,&quot;Kenya&quot;,&quot;Kyrgyzstan&quot;,&quot;Cambodia&quot;,&quot;Kiribati&quot;,&quot;Comoros&quot;,&quot;Saint Kitts and Nevis&quot;,&quot;Korea, Democratic People&#39;s Republic of&quot;,&quot;Korea, Republic of&quot;,&quot;Kuwait&quot;,</div><div class='line' id='LC194'>	&quot;Cayman Islands&quot;,&quot;Kazakhstan&quot;,&quot;Lao People&#39;s Democratic Republic&quot;,&quot;Lebanon&quot;,&quot;Saint Lucia&quot;,&quot;Liechtenstein&quot;,&quot;Sri Lanka&quot;,&quot;Liberia&quot;,&quot;Lesotho&quot;,&quot;Lithuania&quot;,</div><div class='line' id='LC195'>	&quot;Luxembourg&quot;,&quot;Latvia&quot;,&quot;Libya&quot;,&quot;Morocco&quot;,&quot;Monaco&quot;,&quot;Moldova, Republic of&quot;,&quot;Madagascar&quot;,&quot;Marshall Islands&quot;,&quot;Macedonia&quot;,&quot;Mali&quot;,</div><div class='line' id='LC196'>	&quot;Myanmar&quot;,&quot;Mongolia&quot;,&quot;Macau&quot;,&quot;Northern Mariana Islands&quot;,&quot;Martinique&quot;,&quot;Mauritania&quot;,&quot;Montserrat&quot;,&quot;Malta&quot;,&quot;Mauritius&quot;,&quot;Maldives&quot;,</div><div class='line' id='LC197'>	&quot;Malawi&quot;,&quot;Mexico&quot;,&quot;Malaysia&quot;,&quot;Mozambique&quot;,&quot;Namibia&quot;,&quot;New Caledonia&quot;,&quot;Niger&quot;,&quot;Norfolk Island&quot;,&quot;Nigeria&quot;,&quot;Nicaragua&quot;,</div><div class='line' id='LC198'>	&quot;Netherlands&quot;,&quot;Norway&quot;,&quot;Nepal&quot;,&quot;Nauru&quot;,&quot;Niue&quot;,&quot;New Zealand&quot;,&quot;Oman&quot;,&quot;Panama&quot;,&quot;Peru&quot;,&quot;French Polynesia&quot;,</div><div class='line' id='LC199'>	&quot;Papua New Guinea&quot;,&quot;Philippines&quot;,&quot;Pakistan&quot;,&quot;Poland&quot;,&quot;Saint Pierre and Miquelon&quot;,&quot;Pitcairn Islands&quot;,&quot;Puerto Rico&quot;,&quot;Palestinian Territory&quot;,&quot;Portugal&quot;,&quot;Palau&quot;,</div><div class='line' id='LC200'>	&quot;Paraguay&quot;,&quot;Qatar&quot;,&quot;Reunion&quot;,&quot;Romania&quot;,&quot;Russian Federation&quot;,&quot;Rwanda&quot;,&quot;Saudi Arabia&quot;,&quot;Solomon Islands&quot;,&quot;Seychelles&quot;,&quot;Sudan&quot;,</div><div class='line' id='LC201'>	&quot;Sweden&quot;,&quot;Singapore&quot;,&quot;Saint Helena&quot;,&quot;Slovenia&quot;,&quot;Svalbard and Jan Mayen&quot;,&quot;Slovakia&quot;,&quot;Sierra Leone&quot;,&quot;San Marino&quot;,&quot;Senegal&quot;,&quot;Somalia&quot;,&quot;Suriname&quot;,</div><div class='line' id='LC202'>	&quot;Sao Tome and Principe&quot;,&quot;El Salvador&quot;,&quot;Syrian Arab Republic&quot;,&quot;Swaziland&quot;,&quot;Turks and Caicos Islands&quot;,&quot;Chad&quot;,&quot;French Southern Territories&quot;,&quot;Togo&quot;,&quot;Thailand&quot;,</div><div class='line' id='LC203'>	&quot;Tajikistan&quot;,&quot;Tokelau&quot;,&quot;Turkmenistan&quot;,&quot;Tunisia&quot;,&quot;Tonga&quot;,&quot;Timor-Leste&quot;,&quot;Turkey&quot;,&quot;Trinidad and Tobago&quot;,&quot;Tuvalu&quot;,&quot;Taiwan&quot;,</div><div class='line' id='LC204'>	&quot;Tanzania, United Republic of&quot;,&quot;Ukraine&quot;,&quot;Uganda&quot;,&quot;United States Minor Outlying Islands&quot;,&quot;United States&quot;,&quot;Uruguay&quot;,&quot;Uzbekistan&quot;,&quot;Holy See (Vatican City State)&quot;,&quot;Saint Vincent and the Grenadines&quot;,&quot;Venezuela&quot;,</div><div class='line' id='LC205'>	&quot;Virgin Islands, British&quot;,&quot;Virgin Islands, U.S.&quot;,&quot;Vietnam&quot;,&quot;Vanuatu&quot;,&quot;Wallis and Futuna&quot;,&quot;Samoa&quot;,&quot;Yemen&quot;,&quot;Mayotte&quot;,&quot;Serbia&quot;,&quot;South Africa&quot;,</div><div class='line' id='LC206'>	&quot;Zambia&quot;,&quot;Montenegro&quot;,&quot;Zimbabwe&quot;,&quot;Anonymous Proxy&quot;,&quot;Satellite Provider&quot;,&quot;Other&quot;,&quot;Aland Islands&quot;,&quot;Guernsey&quot;,&quot;Isle of Man&quot;,&quot;Jersey&quot;,</div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;Saint Barthelemy&quot;,&quot;Saint Martin&quot;, &quot;Bonaire, Saint Eustatius and Saba&quot;,</div><div class='line' id='LC208'>	&quot;South Sudan&quot;, &quot;Other&quot;</div><div class='line' id='LC209'>);</div><div class='line' id='LC210'><br/></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;var $GEOIP_CONTINENT_CODES = array(</div><div class='line' id='LC212'>&nbsp;&nbsp;&quot;--&quot;, &quot;AS&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;NA&quot;,&quot;NA&quot;,&quot;EU&quot;,&quot;AS&quot;,&quot;NA&quot;,</div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;AN&quot;,&quot;SA&quot;,&quot;OC&quot;,&quot;EU&quot;,&quot;OC&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;NA&quot;,</div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AS&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;SA&quot;,</div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;SA&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;AN&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;AF&quot;,</div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;SA&quot;,&quot;AF&quot;,&quot;AS&quot;,&quot;SA&quot;,&quot;NA&quot;,</div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;NA&quot;,&quot;AF&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;NA&quot;,</div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;SA&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;OC&quot;,</div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;SA&quot;,&quot;OC&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;SA&quot;,</div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AN&quot;,&quot;NA&quot;,</div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;OC&quot;,&quot;AF&quot;,&quot;SA&quot;,&quot;AS&quot;,&quot;AN&quot;,&quot;NA&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;EU&quot;,&quot;AS&quot;,</div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;EU&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;AS&quot;,</div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AS&quot;,&quot;AF&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;OC&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,</div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;NA&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;NA&quot;,&quot;EU&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;EU&quot;,</div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;EU&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;EU&quot;,&quot;AF&quot;,</div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AS&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;OC&quot;,&quot;NA&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;AS&quot;,</div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;AF&quot;,&quot;NA&quot;,</div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;EU&quot;,&quot;EU&quot;,&quot;AS&quot;,&quot;OC&quot;,&quot;OC&quot;,&quot;OC&quot;,&quot;AS&quot;,&quot;NA&quot;,&quot;SA&quot;,&quot;OC&quot;,</div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;OC&quot;,&quot;AS&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;OC&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;OC&quot;,</div><div class='line' id='LC230'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;SA&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;AS&quot;,&quot;OC&quot;,&quot;AF&quot;,&quot;AF&quot;,</div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;EU&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;AF&quot;,</div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;SA&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;NA&quot;,&quot;AF&quot;,&quot;AN&quot;,&quot;AF&quot;,&quot;AS&quot;,</div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AS&quot;,&quot;OC&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;OC&quot;,&quot;AS&quot;,</div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;OC&quot;,&quot;NA&quot;,&quot;SA&quot;,&quot;AS&quot;,&quot;EU&quot;,&quot;NA&quot;,&quot;SA&quot;,</div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;NA&quot;,&quot;NA&quot;,&quot;AS&quot;,&quot;OC&quot;,&quot;OC&quot;,&quot;OC&quot;,&quot;AS&quot;,&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,</div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;AF&quot;,&quot;EU&quot;,&quot;AF&quot;,&quot;--&quot;,&quot;--&quot;,&quot;--&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;EU&quot;,&quot;EU&quot;,</div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&quot;NA&quot;,&quot;NA&quot;,&quot;NA&quot;, &quot;AF&quot;, &quot;--&quot;</div><div class='line' id='LC238'>);</div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC240'>}</div><div class='line' id='LC241'>function geoip_load_shared_mem ($file) {</div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'>&nbsp;&nbsp;$fp = fopen($file, &quot;rb&quot;);</div><div class='line' id='LC244'>&nbsp;&nbsp;if (!$fp) {</div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;print &quot;error opening $file: $php_errormsg\n&quot;;</div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;exit;</div><div class='line' id='LC247'>&nbsp;&nbsp;}</div><div class='line' id='LC248'>&nbsp;&nbsp;$s_array = fstat($fp);</div><div class='line' id='LC249'>&nbsp;&nbsp;$size = $s_array[&#39;size&#39;];</div><div class='line' id='LC250'>&nbsp;&nbsp;if ($shmid = @shmop_open (GEOIP_SHM_KEY, &quot;w&quot;, 0, 0)) {</div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;shmop_delete ($shmid);</div><div class='line' id='LC252'>&nbsp;&nbsp;&nbsp;&nbsp;shmop_close ($shmid);</div><div class='line' id='LC253'>&nbsp;&nbsp;}</div><div class='line' id='LC254'>&nbsp;&nbsp;$shmid = shmop_open (GEOIP_SHM_KEY, &quot;c&quot;, 0644, $size);</div><div class='line' id='LC255'>&nbsp;&nbsp;shmop_write ($shmid, fread($fp, $size), 0);</div><div class='line' id='LC256'>&nbsp;&nbsp;shmop_close ($shmid);</div><div class='line' id='LC257'>}</div><div class='line' id='LC258'><br/></div><div class='line' id='LC259'>function _setup_segments($gi){</div><div class='line' id='LC260'>&nbsp;&nbsp;$gi-&gt;databaseType = GEOIP_COUNTRY_EDITION;</div><div class='line' id='LC261'>&nbsp;&nbsp;$gi-&gt;record_length = STANDARD_RECORD_LENGTH;</div><div class='line' id='LC262'>&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;$offset = @shmop_size ($gi-&gt;shmid) - 3;</div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;for ($i = 0; $i &lt; STRUCTURE_INFO_MAX_SIZE; $i++) {</div><div class='line' id='LC265'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$delim = @shmop_read ($gi-&gt;shmid, $offset, 3);</div><div class='line' id='LC266'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset += 3;</div><div class='line' id='LC267'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($delim == (chr(255).chr(255).chr(255))) {</div><div class='line' id='LC268'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseType = ord(@shmop_read ($gi-&gt;shmid, $offset, 1));</div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset++;</div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV0){</div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = GEOIP_STATE_BEGIN_REV0;</div><div class='line' id='LC273'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV1){</div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = GEOIP_STATE_BEGIN_REV1;</div><div class='line' id='LC275'>	    } else if (($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV0)||</div><div class='line' id='LC276'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1) </div><div class='line' id='LC277'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ORG_EDITION)</div><div class='line' id='LC278'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ORG_EDITION_V6)</div><div class='line' id='LC279'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION)</div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION_V6)</div><div class='line' id='LC281'>		    || ($gi-&gt;databaseType == GEOIP_ISP_EDITION)</div><div class='line' id='LC282'>		    || ($gi-&gt;databaseType == GEOIP_ISP_EDITION_V6)</div><div class='line' id='LC283'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;		    || ($gi-&gt;databaseType == GEOIP_USERTYPE_EDITION)</div><div class='line' id='LC284'>		    || ($gi-&gt;databaseType == GEOIP_USERTYPE_EDITION_V6)</div><div class='line' id='LC285'>		    || ($gi-&gt;databaseType == GEOIP_LOCATIONA_EDITION)</div><div class='line' id='LC286'>		    || ($gi-&gt;databaseType == GEOIP_ACCURACYRADIUS_EDITION)</div><div class='line' id='LC287'>		    || ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV0_V6)</div><div class='line' id='LC288'>		    || ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1_V6)</div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION_REV1)                    </div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION_REV1_V6)                    </div><div class='line' id='LC291'>		    || ($gi-&gt;databaseType == GEOIP_ASNUM_EDITION)</div><div class='line' id='LC292'>		    || ($gi-&gt;databaseType == GEOIP_ASNUM_EDITION_V6)){</div><div class='line' id='LC293'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = 0;</div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = @shmop_read ($gi-&gt;shmid, $offset, SEGMENT_RECORD_LENGTH);</div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for ($j = 0;$j &lt; SEGMENT_RECORD_LENGTH;$j++){</div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments += (ord($buf[$j]) &lt;&lt; ($j * 8));</div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC298'>	            if (($gi-&gt;databaseType == GEOIP_ORG_EDITION)</div><div class='line' id='LC299'>	                || ($gi-&gt;databaseType == GEOIP_ORG_EDITION_V6)</div><div class='line' id='LC300'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION)</div><div class='line' id='LC301'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION_V6)</div><div class='line' id='LC302'>			|| ($gi-&gt;databaseType == GEOIP_ISP_EDITION)</div><div class='line' id='LC303'>			|| ($gi-&gt;databaseType == GEOIP_ISP_EDITION_V6)) {</div><div class='line' id='LC304'>	                $gi-&gt;record_length = ORG_RECORD_LENGTH;</div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC307'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;break;</div><div class='line' id='LC308'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset -= 4;</div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;if (($gi-&gt;databaseType == GEOIP_COUNTRY_EDITION)||</div><div class='line' id='LC313'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_COUNTRY_EDITION_V6)||</div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_PROXY_EDITION)||</div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION)){</div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = GEOIP_COUNTRY_BEGIN;</div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC318'>&nbsp;&nbsp;} else {</div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;$filepos = ftell($gi-&gt;filehandle);</div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle, -3, SEEK_END);</div><div class='line' id='LC321'>&nbsp;&nbsp;&nbsp;&nbsp;for ($i = 0; $i &lt; STRUCTURE_INFO_MAX_SIZE; $i++) {</div><div class='line' id='LC322'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$delim = fread($gi-&gt;filehandle,3);</div><div class='line' id='LC323'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($delim == (chr(255).chr(255).chr(255))){</div><div class='line' id='LC324'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseType = ord(fread($gi-&gt;filehandle,1));</div><div class='line' id='LC325'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV0){</div><div class='line' id='LC326'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = GEOIP_STATE_BEGIN_REV0;</div><div class='line' id='LC327'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC328'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV1){</div><div class='line' id='LC329'>	    $gi-&gt;databaseSegments = GEOIP_STATE_BEGIN_REV1;</div><div class='line' id='LC330'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}  else if (($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV0)</div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1)</div><div class='line' id='LC332'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV0_V6)</div><div class='line' id='LC333'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1_V6)</div><div class='line' id='LC334'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ORG_EDITION) </div><div class='line' id='LC335'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION)</div><div class='line' id='LC336'>		    || ($gi-&gt;databaseType == GEOIP_ISP_EDITION)</div><div class='line' id='LC337'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ORG_EDITION_V6) </div><div class='line' id='LC338'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_DOMAIN_EDITION_V6)</div><div class='line' id='LC339'>		    || ($gi-&gt;databaseType == GEOIP_ISP_EDITION_V6)</div><div class='line' id='LC340'>		    || ($gi-&gt;databaseType == GEOIP_LOCATIONA_EDITION)</div><div class='line' id='LC341'>		    || ($gi-&gt;databaseType == GEOIP_ACCURACYRADIUS_EDITION)</div><div class='line' id='LC342'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV0_V6)</div><div class='line' id='LC343'>		    || ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1_V6)</div><div class='line' id='LC344'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION_REV1)                    </div><div class='line' id='LC345'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION_REV1_V6)                    </div><div class='line' id='LC346'>&nbsp;&nbsp;&nbsp;&nbsp;		    || ($gi-&gt;databaseType == GEOIP_USERTYPE_EDITION)</div><div class='line' id='LC347'>		    || ($gi-&gt;databaseType == GEOIP_USERTYPE_EDITION_V6)	</div><div class='line' id='LC348'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ASNUM_EDITION)</div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ($gi-&gt;databaseType == GEOIP_ASNUM_EDITION_V6)){</div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = 0;</div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = fread($gi-&gt;filehandle,SEGMENT_RECORD_LENGTH);</div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for ($j = 0;$j &lt; SEGMENT_RECORD_LENGTH;$j++){</div><div class='line' id='LC353'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments += (ord($buf[$j]) &lt;&lt; ($j * 8));</div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC355'>	    if (   ( $gi-&gt;databaseType == GEOIP_ORG_EDITION )</div><div class='line' id='LC356'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ( $gi-&gt;databaseType == GEOIP_DOMAIN_EDITION )</div><div class='line' id='LC357'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ( $gi-&gt;databaseType == GEOIP_ISP_EDITION ) </div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ( $gi-&gt;databaseType == GEOIP_ORG_EDITION_V6 )</div><div class='line' id='LC359'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ( $gi-&gt;databaseType == GEOIP_DOMAIN_EDITION_V6 )</div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|| ( $gi-&gt;databaseType == GEOIP_ISP_EDITION_V6 )) {</div><div class='line' id='LC361'>	    $gi-&gt;record_length = ORG_RECORD_LENGTH;</div><div class='line' id='LC362'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC363'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;break;</div><div class='line' id='LC365'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle, -4, SEEK_CUR);</div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC368'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;if (($gi-&gt;databaseType == GEOIP_COUNTRY_EDITION)||</div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_COUNTRY_EDITION_V6)||</div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_PROXY_EDITION)||</div><div class='line' id='LC372'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;($gi-&gt;databaseType == GEOIP_NETSPEED_EDITION)){</div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;databaseSegments = GEOIP_COUNTRY_BEGIN;</div><div class='line' id='LC374'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC375'>&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle,$filepos,SEEK_SET);</div><div class='line' id='LC376'>&nbsp;&nbsp;}</div><div class='line' id='LC377'>&nbsp;&nbsp;return $gi;</div><div class='line' id='LC378'>}</div><div class='line' id='LC379'><br/></div><div class='line' id='LC380'>function geoip_open($filename, $flags) {</div><div class='line' id='LC381'>&nbsp;&nbsp;$gi = new GeoIP;</div><div class='line' id='LC382'>&nbsp;&nbsp;$gi-&gt;flags = $flags;</div><div class='line' id='LC383'>&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC384'>&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;shmid = @shmop_open (GEOIP_SHM_KEY, &quot;a&quot;, 0, 0);</div><div class='line' id='LC385'>&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;filehandle = fopen($filename,&quot;rb&quot;) or die( &quot;Can not open $filename\n&quot; );</div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_MEMORY_CACHE) {</div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$s_array = fstat($gi-&gt;filehandle);</div><div class='line' id='LC389'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$gi-&gt;memory_buffer = fread($gi-&gt;filehandle, $s_array[&#39;size&#39;]);</div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC391'>&nbsp;&nbsp;}</div><div class='line' id='LC392'><br/></div><div class='line' id='LC393'>&nbsp;&nbsp;$gi = _setup_segments($gi);</div><div class='line' id='LC394'>&nbsp;&nbsp;return $gi;</div><div class='line' id='LC395'>}</div><div class='line' id='LC396'><br/></div><div class='line' id='LC397'>function geoip_close($gi) {</div><div class='line' id='LC398'>&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;&nbsp;return true;</div><div class='line' id='LC400'>&nbsp;&nbsp;}</div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'>&nbsp;&nbsp;return fclose($gi-&gt;filehandle);</div><div class='line' id='LC403'>}</div><div class='line' id='LC404'><br/></div><div class='line' id='LC405'>function geoip_country_id_by_name_v6($gi, $name) {</div><div class='line' id='LC406'>&nbsp;&nbsp;$rec = dns_get_record($name, DNS_AAAA);</div><div class='line' id='LC407'>&nbsp;&nbsp;if ( !$rec ) {</div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;return false;</div><div class='line' id='LC409'>&nbsp;&nbsp;}</div><div class='line' id='LC410'>&nbsp;&nbsp;$addr = $rec[0][&quot;ipv6&quot;];</div><div class='line' id='LC411'>&nbsp;&nbsp;if (!$addr || $addr == $name) {</div><div class='line' id='LC412'>&nbsp;&nbsp;&nbsp;&nbsp;return false;</div><div class='line' id='LC413'>&nbsp;&nbsp;}</div><div class='line' id='LC414'>&nbsp;&nbsp;return geoip_country_id_by_addr_v6($gi, $addr);</div><div class='line' id='LC415'>}</div><div class='line' id='LC416'><br/></div><div class='line' id='LC417'>function geoip_country_id_by_name($gi, $name) {</div><div class='line' id='LC418'>&nbsp;&nbsp;$addr = gethostbyname($name);</div><div class='line' id='LC419'>&nbsp;&nbsp;if (!$addr || $addr == $name) {</div><div class='line' id='LC420'>&nbsp;&nbsp;&nbsp;&nbsp;return false;</div><div class='line' id='LC421'>&nbsp;&nbsp;}</div><div class='line' id='LC422'>&nbsp;&nbsp;return geoip_country_id_by_addr($gi, $addr);</div><div class='line' id='LC423'>}</div><div class='line' id='LC424'><br/></div><div class='line' id='LC425'>function geoip_country_code_by_name_v6($gi, $name) {</div><div class='line' id='LC426'>&nbsp;&nbsp;$country_id = geoip_country_id_by_name_v6($gi,$name);</div><div class='line' id='LC427'>&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC428'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_CODES[$country_id];</div><div class='line' id='LC429'>&nbsp;&nbsp;}</div><div class='line' id='LC430'>&nbsp;&nbsp;return false;</div><div class='line' id='LC431'>}</div><div class='line' id='LC432'><br/></div><div class='line' id='LC433'>function geoip_country_code_by_name($gi, $name) {</div><div class='line' id='LC434'>&nbsp;&nbsp;$country_id = geoip_country_id_by_name($gi,$name);</div><div class='line' id='LC435'>&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC436'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_CODES[$country_id];</div><div class='line' id='LC437'>&nbsp;&nbsp;}</div><div class='line' id='LC438'>&nbsp;&nbsp;return false;</div><div class='line' id='LC439'>}</div><div class='line' id='LC440'><br/></div><div class='line' id='LC441'>function geoip_country_name_by_name_v6($gi, $name) {</div><div class='line' id='LC442'>&nbsp;&nbsp;$country_id = geoip_country_id_by_name_v6($gi,$name);</div><div class='line' id='LC443'>&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC444'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_NAMES[$country_id];</div><div class='line' id='LC445'>&nbsp;&nbsp;}</div><div class='line' id='LC446'>&nbsp;&nbsp;return false;</div><div class='line' id='LC447'>}</div><div class='line' id='LC448'><br/></div><div class='line' id='LC449'>function geoip_country_name_by_name($gi, $name) {</div><div class='line' id='LC450'>&nbsp;&nbsp;$country_id = geoip_country_id_by_name($gi,$name);</div><div class='line' id='LC451'>&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC452'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_NAMES[$country_id];</div><div class='line' id='LC453'>&nbsp;&nbsp;}</div><div class='line' id='LC454'>&nbsp;&nbsp;return false;</div><div class='line' id='LC455'>}</div><div class='line' id='LC456'><br/></div><div class='line' id='LC457'>function geoip_country_id_by_addr_v6($gi, $addr) {</div><div class='line' id='LC458'>&nbsp;&nbsp;$ipnum = inet_pton($addr);</div><div class='line' id='LC459'>&nbsp;&nbsp;return _geoip_seek_country_v6($gi, $ipnum) - GEOIP_COUNTRY_BEGIN;</div><div class='line' id='LC460'>}</div><div class='line' id='LC461'><br/></div><div class='line' id='LC462'>function geoip_country_id_by_addr($gi, $addr) {</div><div class='line' id='LC463'>&nbsp;&nbsp;$ipnum = ip2long($addr);</div><div class='line' id='LC464'>&nbsp;&nbsp;return _geoip_seek_country($gi, $ipnum) - GEOIP_COUNTRY_BEGIN;</div><div class='line' id='LC465'>}</div><div class='line' id='LC466'><br/></div><div class='line' id='LC467'>function geoip_country_code_by_addr_v6($gi, $addr) {</div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;$country_id = geoip_country_id_by_addr_v6($gi,$addr);</div><div class='line' id='LC469'>&nbsp;&nbsp;&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC470'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_CODES[$country_id];</div><div class='line' id='LC471'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC472'>&nbsp;&nbsp;return false;</div><div class='line' id='LC473'>}</div><div class='line' id='LC474'><br/></div><div class='line' id='LC475'>function geoip_country_code_by_addr($gi, $addr) {</div><div class='line' id='LC476'>&nbsp;&nbsp;if ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1) {</div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;&nbsp;$record = geoip_record_by_addr($gi,$addr);</div><div class='line' id='LC478'>&nbsp;&nbsp;&nbsp;&nbsp;if ( $record !== false ) {</div><div class='line' id='LC479'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $record-&gt;country_code;</div><div class='line' id='LC480'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC481'>&nbsp;&nbsp;} else {</div><div class='line' id='LC482'>&nbsp;&nbsp;&nbsp;&nbsp;$country_id = geoip_country_id_by_addr($gi,$addr);</div><div class='line' id='LC483'>&nbsp;&nbsp;&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC484'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_CODES[$country_id];</div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC486'>&nbsp;&nbsp;}</div><div class='line' id='LC487'>&nbsp;&nbsp;return false;</div><div class='line' id='LC488'>}</div><div class='line' id='LC489'><br/></div><div class='line' id='LC490'>function geoip_country_name_by_addr_v6($gi, $addr) {</div><div class='line' id='LC491'>&nbsp;&nbsp;&nbsp;&nbsp;$country_id = geoip_country_id_by_addr_v6($gi,$addr);</div><div class='line' id='LC492'>&nbsp;&nbsp;&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC493'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_NAMES[$country_id];</div><div class='line' id='LC494'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC495'>&nbsp;&nbsp;return false;</div><div class='line' id='LC496'>}</div><div class='line' id='LC497'><br/></div><div class='line' id='LC498'>function geoip_country_name_by_addr($gi, $addr) {</div><div class='line' id='LC499'>&nbsp;&nbsp;if ($gi-&gt;databaseType == GEOIP_CITY_EDITION_REV1) {</div><div class='line' id='LC500'>&nbsp;&nbsp;&nbsp;&nbsp;$record = geoip_record_by_addr($gi,$addr);</div><div class='line' id='LC501'>&nbsp;&nbsp;&nbsp;&nbsp;return $record-&gt;country_name;</div><div class='line' id='LC502'>&nbsp;&nbsp;} else {</div><div class='line' id='LC503'>&nbsp;&nbsp;&nbsp;&nbsp;$country_id = geoip_country_id_by_addr($gi,$addr);</div><div class='line' id='LC504'>&nbsp;&nbsp;&nbsp;&nbsp;if ($country_id !== false) {</div><div class='line' id='LC505'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $gi-&gt;GEOIP_COUNTRY_NAMES[$country_id];</div><div class='line' id='LC506'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC507'>&nbsp;&nbsp;}</div><div class='line' id='LC508'>&nbsp;&nbsp;return false;</div><div class='line' id='LC509'>}</div><div class='line' id='LC510'><br/></div><div class='line' id='LC511'>function _geoip_seek_country_v6($gi, $ipnum) {</div><div class='line' id='LC512'><br/></div><div class='line' id='LC513'>&nbsp;&nbsp;# arrays from unpack start with offset 1</div><div class='line' id='LC514'>&nbsp;&nbsp;# yet another php mystery. array_merge work around </div><div class='line' id='LC515'>&nbsp;&nbsp;# this broken behaviour</div><div class='line' id='LC516'>&nbsp;&nbsp;$v6vec = array_merge(unpack( &quot;C16&quot;, $ipnum));</div><div class='line' id='LC517'><br/></div><div class='line' id='LC518'>&nbsp;&nbsp;$offset = 0;</div><div class='line' id='LC519'>&nbsp;&nbsp;for ($depth = 127; $depth &gt;= 0; --$depth) {</div><div class='line' id='LC520'>&nbsp;&nbsp;&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_MEMORY_CACHE) {</div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// workaround php&#39;s broken substr, strpos, etc handling with</div><div class='line' id='LC522'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// mbstring.func_overload and mbstring.internal_encoding</div><div class='line' id='LC523'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$enc = mb_internal_encoding();</div><div class='line' id='LC524'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mb_internal_encoding(&#39;ISO-8859-1&#39;); </div><div class='line' id='LC525'><br/></div><div class='line' id='LC526'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = substr($gi-&gt;memory_buffer,</div><div class='line' id='LC527'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length * $offset,</div><div class='line' id='LC528'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length);</div><div class='line' id='LC529'><br/></div><div class='line' id='LC530'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mb_internal_encoding($enc);</div><div class='line' id='LC531'>&nbsp;&nbsp;&nbsp;&nbsp;} elseif ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC532'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = @shmop_read ($gi-&gt;shmid, </div><div class='line' id='LC533'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length * $offset,</div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length );</div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC536'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle, 2 * $gi-&gt;record_length * $offset, SEEK_SET) == 0</div><div class='line' id='LC537'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;or die(&quot;fseek failed&quot;);</div><div class='line' id='LC538'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = fread($gi-&gt;filehandle, 2 * $gi-&gt;record_length);</div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC540'>&nbsp;&nbsp;&nbsp;&nbsp;$x = array(0,0);</div><div class='line' id='LC541'>&nbsp;&nbsp;&nbsp;&nbsp;for ($i = 0; $i &lt; 2; ++$i) {</div><div class='line' id='LC542'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for ($j = 0; $j &lt; $gi-&gt;record_length; ++$j) {</div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$x[$i] += ord($buf[$gi-&gt;record_length * $i + $j]) &lt;&lt; ($j * 8);</div><div class='line' id='LC544'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC545'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC546'><br/></div><div class='line' id='LC547'>&nbsp;&nbsp;&nbsp;&nbsp;$bnum = 127 - $depth;</div><div class='line' id='LC548'>&nbsp;&nbsp;&nbsp;&nbsp;$idx = $bnum &gt;&gt; 3;</div><div class='line' id='LC549'>&nbsp;&nbsp;&nbsp;&nbsp;$b_mask = 1 &lt;&lt; ( $bnum &amp; 7 ^ 7 );</div><div class='line' id='LC550'>&nbsp;&nbsp;&nbsp;&nbsp;if (($v6vec[$idx] &amp; $b_mask) &gt; 0) {</div><div class='line' id='LC551'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($x[1] &gt;= $gi-&gt;databaseSegments) {</div><div class='line' id='LC552'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $x[1];</div><div class='line' id='LC553'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC554'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset = $x[1];</div><div class='line' id='LC555'>&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC556'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($x[0] &gt;= $gi-&gt;databaseSegments) {</div><div class='line' id='LC557'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $x[0];</div><div class='line' id='LC558'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC559'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset = $x[0];</div><div class='line' id='LC560'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC561'>&nbsp;&nbsp;}</div><div class='line' id='LC562'>&nbsp;&nbsp;trigger_error(&quot;error traversing database - perhaps it is corrupt?&quot;, E_USER_ERROR);</div><div class='line' id='LC563'>&nbsp;&nbsp;return false;</div><div class='line' id='LC564'>}</div><div class='line' id='LC565'><br/></div><div class='line' id='LC566'>function _geoip_seek_country($gi, $ipnum) {</div><div class='line' id='LC567'>&nbsp;&nbsp;$offset = 0;</div><div class='line' id='LC568'>&nbsp;&nbsp;for ($depth = 31; $depth &gt;= 0; --$depth) {</div><div class='line' id='LC569'>&nbsp;&nbsp;&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_MEMORY_CACHE) {</div><div class='line' id='LC570'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// workaround php&#39;s broken substr, strpos, etc handling with</div><div class='line' id='LC571'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// mbstring.func_overload and mbstring.internal_encoding</div><div class='line' id='LC572'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$enc = mb_internal_encoding();</div><div class='line' id='LC573'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mb_internal_encoding(&#39;ISO-8859-1&#39;); </div><div class='line' id='LC574'><br/></div><div class='line' id='LC575'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = substr($gi-&gt;memory_buffer,</div><div class='line' id='LC576'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length * $offset,</div><div class='line' id='LC577'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length);</div><div class='line' id='LC578'><br/></div><div class='line' id='LC579'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mb_internal_encoding($enc);</div><div class='line' id='LC580'>&nbsp;&nbsp;&nbsp;&nbsp;} elseif ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC581'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = @shmop_read ($gi-&gt;shmid, </div><div class='line' id='LC582'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length * $offset,</div><div class='line' id='LC583'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 * $gi-&gt;record_length );</div><div class='line' id='LC584'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC585'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle, 2 * $gi-&gt;record_length * $offset, SEEK_SET) == 0</div><div class='line' id='LC586'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;or die(&quot;fseek failed&quot;);</div><div class='line' id='LC587'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$buf = fread($gi-&gt;filehandle, 2 * $gi-&gt;record_length);</div><div class='line' id='LC588'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC589'>&nbsp;&nbsp;&nbsp;&nbsp;$x = array(0,0);</div><div class='line' id='LC590'>&nbsp;&nbsp;&nbsp;&nbsp;for ($i = 0; $i &lt; 2; ++$i) {</div><div class='line' id='LC591'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for ($j = 0; $j &lt; $gi-&gt;record_length; ++$j) {</div><div class='line' id='LC592'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$x[$i] += ord($buf[$gi-&gt;record_length * $i + $j]) &lt;&lt; ($j * 8);</div><div class='line' id='LC593'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC594'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC595'>&nbsp;&nbsp;&nbsp;&nbsp;if ($ipnum &amp; (1 &lt;&lt; $depth)) {</div><div class='line' id='LC596'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($x[1] &gt;= $gi-&gt;databaseSegments) {</div><div class='line' id='LC597'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $x[1];</div><div class='line' id='LC598'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC599'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset = $x[1];</div><div class='line' id='LC600'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC601'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if ($x[0] &gt;= $gi-&gt;databaseSegments) {</div><div class='line' id='LC602'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return $x[0];</div><div class='line' id='LC603'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC604'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$offset = $x[0];</div><div class='line' id='LC605'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC606'>&nbsp;&nbsp;}</div><div class='line' id='LC607'>&nbsp;&nbsp;trigger_error(&quot;error traversing database - perhaps it is corrupt?&quot;, E_USER_ERROR);</div><div class='line' id='LC608'>&nbsp;&nbsp;return false;</div><div class='line' id='LC609'>}</div><div class='line' id='LC610'><br/></div><div class='line' id='LC611'>function _common_get_org($gi, $seek_org){</div><div class='line' id='LC612'>&nbsp;&nbsp;$record_pointer = $seek_org + (2 * $gi-&gt;record_length - 1) * $gi-&gt;databaseSegments;</div><div class='line' id='LC613'>&nbsp;&nbsp;if ($gi-&gt;flags &amp; GEOIP_SHARED_MEMORY) {</div><div class='line' id='LC614'>&nbsp;&nbsp;&nbsp;&nbsp;$org_buf = @shmop_read ($gi-&gt;shmid, $record_pointer, MAX_ORG_RECORD_LENGTH);</div><div class='line' id='LC615'>&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC616'>&nbsp;&nbsp;&nbsp;&nbsp;fseek($gi-&gt;filehandle, $record_pointer, SEEK_SET);</div><div class='line' id='LC617'>&nbsp;&nbsp;&nbsp;&nbsp;$org_buf = fread($gi-&gt;filehandle,MAX_ORG_RECORD_LENGTH);</div><div class='line' id='LC618'>&nbsp;&nbsp;}</div><div class='line' id='LC619'>&nbsp;&nbsp;// workaround php&#39;s broken substr, strpos, etc handling with</div><div class='line' id='LC620'>&nbsp;&nbsp;// mbstring.func_overload and mbstring.internal_encoding</div><div class='line' id='LC621'>&nbsp;&nbsp;$enc = mb_internal_encoding();</div><div class='line' id='LC622'>&nbsp;&nbsp;mb_internal_encoding(&#39;ISO-8859-1&#39;); </div><div class='line' id='LC623'>&nbsp;&nbsp;$org_buf = substr($org_buf, 0, strpos($org_buf, &quot;\0&quot;));</div><div class='line' id='LC624'>&nbsp;&nbsp;mb_internal_encoding($enc);</div><div class='line' id='LC625'>&nbsp;&nbsp;return $org_buf;</div><div class='line' id='LC626'>}</div><div class='line' id='LC627'><br/></div><div class='line' id='LC628'>function _get_org_v6($gi,$ipnum){</div><div class='line' id='LC629'>&nbsp;&nbsp;$seek_org = _geoip_seek_country_v6($gi,$ipnum);</div><div class='line' id='LC630'>&nbsp;&nbsp;if ($seek_org == $gi-&gt;databaseSegments) {</div><div class='line' id='LC631'>&nbsp;&nbsp;&nbsp;&nbsp;return NULL;</div><div class='line' id='LC632'>&nbsp;&nbsp;}</div><div class='line' id='LC633'>&nbsp;&nbsp;return _common_get_org($gi, $seek_org);</div><div class='line' id='LC634'>}</div><div class='line' id='LC635'><br/></div><div class='line' id='LC636'>function _get_org($gi,$ipnum){</div><div class='line' id='LC637'>&nbsp;&nbsp;$seek_org = _geoip_seek_country($gi,$ipnum);</div><div class='line' id='LC638'>&nbsp;&nbsp;if ($seek_org == $gi-&gt;databaseSegments) {</div><div class='line' id='LC639'>&nbsp;&nbsp;&nbsp;&nbsp;return NULL;</div><div class='line' id='LC640'>&nbsp;&nbsp;}</div><div class='line' id='LC641'>&nbsp;&nbsp;return _common_get_org($gi, $seek_org);</div><div class='line' id='LC642'>}</div><div class='line' id='LC643'><br/></div><div class='line' id='LC644'><br/></div><div class='line' id='LC645'><br/></div><div class='line' id='LC646'>function geoip_name_by_addr_v6 ($gi,$addr) {</div><div class='line' id='LC647'>&nbsp;&nbsp;if ($addr == NULL) {</div><div class='line' id='LC648'>&nbsp;&nbsp;&nbsp;&nbsp;return 0;</div><div class='line' id='LC649'>&nbsp;&nbsp;}</div><div class='line' id='LC650'>&nbsp;&nbsp;$ipnum = inet_pton($addr);</div><div class='line' id='LC651'>&nbsp;&nbsp;return _get_org_v6($gi, $ipnum);</div><div class='line' id='LC652'>}</div><div class='line' id='LC653'><br/></div><div class='line' id='LC654'>function geoip_name_by_addr ($gi,$addr) {</div><div class='line' id='LC655'>&nbsp;&nbsp;if ($addr == NULL) {</div><div class='line' id='LC656'>&nbsp;&nbsp;&nbsp;&nbsp;return 0;</div><div class='line' id='LC657'>&nbsp;&nbsp;}</div><div class='line' id='LC658'>&nbsp;&nbsp;$ipnum = ip2long($addr);</div><div class='line' id='LC659'>&nbsp;&nbsp;return _get_org($gi, $ipnum);</div><div class='line' id='LC660'>}</div><div class='line' id='LC661'><br/></div><div class='line' id='LC662'>function geoip_org_by_addr ($gi,$addr) {</div><div class='line' id='LC663'>&nbsp;&nbsp;return geoip_name_by_addr($gi, $addr);</div><div class='line' id='LC664'>}</div><div class='line' id='LC665'><br/></div><div class='line' id='LC666'>function _get_region($gi,$ipnum){</div><div class='line' id='LC667'>&nbsp;&nbsp;if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV0){</div><div class='line' id='LC668'>&nbsp;&nbsp;&nbsp;&nbsp;$seek_region = _geoip_seek_country($gi,$ipnum) - GEOIP_STATE_BEGIN_REV0;</div><div class='line' id='LC669'>&nbsp;&nbsp;&nbsp;&nbsp;if ($seek_region &gt;= 1000){</div><div class='line' id='LC670'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = &quot;US&quot;;</div><div class='line' id='LC671'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = chr(($seek_region - 1000)/26 + 65) . chr(($seek_region - 1000)%26 + 65);</div><div class='line' id='LC672'>&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC673'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = $gi-&gt;GEOIP_COUNTRY_CODES[$seek_region];</div><div class='line' id='LC674'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = &quot;&quot;;</div><div class='line' id='LC675'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC676'>&nbsp;&nbsp;return array ($country_code,$region);</div><div class='line' id='LC677'>&nbsp;&nbsp;&nbsp;&nbsp;}  else if ($gi-&gt;databaseType == GEOIP_REGION_EDITION_REV1) {</div><div class='line' id='LC678'>&nbsp;&nbsp;&nbsp;&nbsp;$seek_region = _geoip_seek_country($gi,$ipnum) - GEOIP_STATE_BEGIN_REV1;</div><div class='line' id='LC679'>&nbsp;&nbsp;&nbsp;&nbsp;//print $seek_region;</div><div class='line' id='LC680'>&nbsp;&nbsp;&nbsp;&nbsp;if ($seek_region &lt; US_OFFSET){</div><div class='line' id='LC681'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = &quot;&quot;;</div><div class='line' id='LC682'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = &quot;&quot;;  </div><div class='line' id='LC683'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else if ($seek_region &lt; CANADA_OFFSET) {</div><div class='line' id='LC684'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = &quot;US&quot;;</div><div class='line' id='LC685'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = chr(($seek_region - US_OFFSET)/26 + 65) . chr(($seek_region - US_OFFSET)%26 + 65);</div><div class='line' id='LC686'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} else if ($seek_region &lt; WORLD_OFFSET) {</div><div class='line' id='LC687'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = &quot;CA&quot;;</div><div class='line' id='LC688'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = chr(($seek_region - CANADA_OFFSET)/26 + 65) . chr(($seek_region - CANADA_OFFSET)%26 + 65);</div><div class='line' id='LC689'>&nbsp;&nbsp;&nbsp;&nbsp;} else {</div><div class='line' id='LC690'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$country_code = $gi-&gt;GEOIP_COUNTRY_CODES[($seek_region - WORLD_OFFSET) / FIPS_RANGE];</div><div class='line' id='LC691'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$region = &quot;&quot;;</div><div class='line' id='LC692'>&nbsp;&nbsp;&nbsp;&nbsp;}</div><div class='line' id='LC693'>&nbsp;&nbsp;return array ($country_code,$region);</div><div class='line' id='LC694'>&nbsp;&nbsp;}</div><div class='line' id='LC695'>}</div><div class='line' id='LC696'><br/></div><div class='line' id='LC697'>function geoip_region_by_addr ($gi,$addr) {</div><div class='line' id='LC698'>&nbsp;&nbsp;if ($addr == NULL) {</div><div class='line' id='LC699'>&nbsp;&nbsp;&nbsp;&nbsp;return 0;</div><div class='line' id='LC700'>&nbsp;&nbsp;}</div><div class='line' id='LC701'>&nbsp;&nbsp;$ipnum = ip2long($addr);</div><div class='line' id='LC702'>&nbsp;&nbsp;return _get_region($gi, $ipnum);</div><div class='line' id='LC703'>}</div><div class='line' id='LC704'><br/></div><div class='line' id='LC705'>function getdnsattributes ($l,$ip){</div><div class='line' id='LC706'>&nbsp;&nbsp;$r = new Net_DNS_Resolver();</div><div class='line' id='LC707'>&nbsp;&nbsp;$r-&gt;nameservers = array(&quot;ws1.maxmind.com&quot;);</div><div class='line' id='LC708'>&nbsp;&nbsp;$p = $r-&gt;search($l.&quot;.&quot; . $ip .&quot;.s.maxmind.com&quot;,&quot;TXT&quot;,&quot;IN&quot;);</div><div class='line' id='LC709'>&nbsp;&nbsp;$str = is_object($p-&gt;answer[0])?$p-&gt;answer[0]-&gt;string():&#39;&#39;;</div><div class='line' id='LC710'>&nbsp;&nbsp;$str = substr( $str, 1, -1 );</div><div class='line' id='LC711'>&nbsp;&nbsp;return $str;</div><div class='line' id='LC712'>}</div><div class='line' id='LC713'><br/></div><div class='line' id='LC714'>?&gt;</div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1360648843" height="64" width="64">
</div>


        </div>
      </div>
      <div class="modal-backdrop"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.04768s from fe3.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/maxmind/geoip-api-php/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="octicon octicon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.04850' data-host='fe3'></span>
    
  </body>
</html>

