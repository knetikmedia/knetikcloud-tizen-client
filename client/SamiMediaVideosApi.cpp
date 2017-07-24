#include "SamiMediaVideosApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiMediaVideosApi::SamiMediaVideosApi() {

}

SamiMediaVideosApi::~SamiMediaVideosApi() {

}

void
addUserToVideoWhitelistProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::addUserToVideoWhitelistWithCompletion(Long* _id, Integer* userId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addUserToVideoWhitelistProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(userId != null) {
    mBody = new String(userId->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{id}/whitelist");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
addVideoProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVideoResource* out = new SamiVideoResource();
    jsonToValue(out, pJson, L"SamiVideoResource*", L"SamiVideoResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVideoResource* 
SamiMediaVideosApi::addVideoWithCompletion(SamiVideoResource* videoResource, void (* success)(SamiVideoResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addVideoProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(videoResource != null) {
    mBody = new String(videoResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos");


  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
addVideoCommentProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCommentResource* out = new SamiCommentResource();
    jsonToValue(out, pJson, L"SamiCommentResource*", L"SamiCommentResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiCommentResource* 
SamiMediaVideosApi::addVideoCommentWithCompletion(Integer* videoId, SamiCommentResource* commentResource, void (* success)(SamiCommentResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addVideoCommentProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(commentResource != null) {
    mBody = new String(commentResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/comments");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
addVideoContributorProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::addVideoContributorWithCompletion(Long* videoId, SamiContributionResource* contributionResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addVideoContributorProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(contributionResource != null) {
    mBody = new String(contributionResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/contributors");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
addVideoFlagProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiFlagResource* out = new SamiFlagResource();
    jsonToValue(out, pJson, L"SamiFlagResource*", L"SamiFlagResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiFlagResource* 
SamiMediaVideosApi::addVideoFlagWithCompletion(Long* videoId, String* reason, void (* success)(SamiFlagResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addVideoFlagProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(reason != null) {
    mBody = new String(reason->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/moderation");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
addVideoRelationshipsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVideoRelationshipResource* out = new SamiVideoRelationshipResource();
    jsonToValue(out, pJson, L"SamiVideoRelationshipResource*", L"SamiVideoRelationshipResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVideoRelationshipResource* 
SamiMediaVideosApi::addVideoRelationshipsWithCompletion(Long* videoId, SamiVideoRelationshipResource* videoRelationshipResource, void (* success)(SamiVideoRelationshipResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addVideoRelationshipsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(videoRelationshipResource != null) {
    mBody = new String(videoRelationshipResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/related");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createVideoDispositionProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiDispositionResource* out = new SamiDispositionResource();
    jsonToValue(out, pJson, L"SamiDispositionResource*", L"SamiDispositionResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiDispositionResource* 
SamiMediaVideosApi::createVideoDispositionWithCompletion(Integer* videoId, SamiDispositionResource* dispositionResource, void (* success)(SamiDispositionResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createVideoDispositionProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(dispositionResource != null) {
    mBody = new String(dispositionResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/dispositions");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteVideoProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::deleteVideoWithCompletion(Long* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteVideoProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteVideoCommentProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::deleteVideoCommentWithCompletion(Long* videoId, Long* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteVideoCommentProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/comments/{id}");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteVideoDispositionProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::deleteVideoDispositionWithCompletion(Long* dispositionId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteVideoDispositionProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/dispositions/{disposition_id}");

  String s_dispositionId(L"{");
  s_dispositionId.Append(L"disposition_id");
  s_dispositionId.Append(L"}");
  url.Replace(s_dispositionId, stringify(dispositionId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteVideoFlagProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::deleteVideoFlagWithCompletion(Long* videoId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteVideoFlagProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/moderation");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteVideoRelationshipProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::deleteVideoRelationshipWithCompletion(Long* videoId, Long* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteVideoRelationshipProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/related/{id}");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getUserVideosProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«VideoResource»* out = new SamiPageResource«VideoResource»();
    jsonToValue(out, pJson, L"SamiPageResource«VideoResource»*", L"SamiPageResource«VideoResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«VideoResource»* 
SamiMediaVideosApi::getUserVideosWithCompletion(Integer* userId, Boolean* excludeFlagged, Integer* size, Integer* page, void (* success)(SamiPageResource«VideoResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserVideosProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("exclude_flagged"), excludeFlagged);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/users/{user_id}/videos");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getVideoProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVideoResource* out = new SamiVideoResource();
    jsonToValue(out, pJson, L"SamiVideoResource*", L"SamiVideoResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiVideoResource* 
SamiMediaVideosApi::getVideoWithCompletion(Long* _id, void (* success)(SamiVideoResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getVideoProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getVideoCommentsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«CommentResource»* out = new SamiPageResource«CommentResource»();
    jsonToValue(out, pJson, L"SamiPageResource«CommentResource»*", L"SamiPageResource«CommentResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«CommentResource»* 
SamiMediaVideosApi::getVideoCommentsWithCompletion(Integer* videoId, Integer* size, Integer* page, void (* success)(SamiPageResource«CommentResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getVideoCommentsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/media/videos/{video_id}/comments");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getVideoDispositionsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«DispositionResource»* out = new SamiPageResource«DispositionResource»();
    jsonToValue(out, pJson, L"SamiPageResource«DispositionResource»*", L"SamiPageResource«DispositionResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«DispositionResource»* 
SamiMediaVideosApi::getVideoDispositionsWithCompletion(Integer* videoId, Integer* size, Integer* page, void (* success)(SamiPageResource«DispositionResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getVideoDispositionsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/media/videos/{video_id}/dispositions");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getVideoRelationshipsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«VideoRelationshipResource»* out = new SamiPageResource«VideoRelationshipResource»();
    jsonToValue(out, pJson, L"SamiPageResource«VideoRelationshipResource»*", L"SamiPageResource«VideoRelationshipResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«VideoRelationshipResource»* 
SamiMediaVideosApi::getVideoRelationshipsWithCompletion(Long* videoId, Integer* size, Integer* page, void (* success)(SamiPageResource«VideoRelationshipResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getVideoRelationshipsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/media/videos/{video_id}/related");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getVideosProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«VideoResource»* out = new SamiPageResource«VideoResource»();
    jsonToValue(out, pJson, L"SamiPageResource«VideoResource»*", L"SamiPageResource«VideoResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«VideoResource»* 
SamiMediaVideosApi::getVideosWithCompletion(Boolean* excludeFlagged, Integer* filterVideosByUploader, String* filterCategory, String* filterTagset, String* filterVideosByName, Integer* filterVideosByContributor, Integer* filterVideosByAuthor, Boolean* filterHasAuthor, Boolean* filterHasUploader, String* filterRelatedTo, Boolean* filterFriends, String* filterDisposition, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«VideoResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getVideosProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("exclude_flagged"), excludeFlagged);

    queryParams->Add(new String("filter_videos_by_uploader"), filterVideosByUploader);

    queryParams->Add(new String("filter_category"), filterCategory);

    queryParams->Add(new String("filter_tagset"), filterTagset);

    queryParams->Add(new String("filter_videos_by_name"), filterVideosByName);

    queryParams->Add(new String("filter_videos_by_contributor"), filterVideosByContributor);

    queryParams->Add(new String("filter_videos_by_author"), filterVideosByAuthor);

    queryParams->Add(new String("filter_has_author"), filterHasAuthor);

    queryParams->Add(new String("filter_has_uploader"), filterHasUploader);

    queryParams->Add(new String("filter_related_to"), filterRelatedTo);

    queryParams->Add(new String("filter_friends"), filterFriends);

    queryParams->Add(new String("filter_disposition"), filterDisposition);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/media/videos");


  client->execute(SamiMediaVideosApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
removeUserFromVideoWhitelistProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::removeUserFromVideoWhitelistWithCompletion(Long* videoId, Integer* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&removeUserFromVideoWhitelistProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/whitelist/{id}");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
removeVideoContributorProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::removeVideoContributorWithCompletion(Long* videoId, Integer* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&removeVideoContributorProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{video_id}/contributors/{id}");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateVideoProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::updateVideoWithCompletion(Long* _id, SamiVideoResource* videoResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateVideoProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(videoResource != null) {
    mBody = new String(videoResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateVideoCommentProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::updateVideoCommentWithCompletion(Long* videoId, Long* _id, String* content, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateVideoCommentProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(content != null) {
    mBody = new String(content->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/comments/{id}/content");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateVideoRelationshipProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::updateVideoRelationshipWithCompletion(Long* videoId, Long* relationshipId, String* details, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateVideoRelationshipProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(details != null) {
    mBody = new String(details->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/media/videos/{video_id}/related/{id}/relationship_details");

  String s_videoId(L"{");
  s_videoId.Append(L"video_id");
  s_videoId.Append(L"}");
  url.Replace(s_videoId, stringify(videoId, L"Long*"));
  String s_relationshipId(L"{");
  s_relationshipId.Append(L"relationship_id");
  s_relationshipId.Append(L"}");
  url.Replace(s_relationshipId, stringify(relationshipId, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
viewVideoProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiMediaVideosApi::viewVideoWithCompletion(Long* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&viewVideoProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/media/videos/{id}/views");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiMediaVideosApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
