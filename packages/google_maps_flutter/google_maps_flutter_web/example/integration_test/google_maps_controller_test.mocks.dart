// Mocks generated by Mockito 5.3.2 from annotations
// in google_maps_flutter_web_integration_tests/integration_test/google_maps_controller_test.dart.
// Do not manually edit this file.

// ignore_for_file: no_leading_underscores_for_library_prefixes
import 'dart:async' as _i6;
import 'dart:html' as _i3;

import 'package:google_maps/google_maps.dart' as _i2;
import 'package:google_maps_flutter_platform_interface/google_maps_flutter_platform_interface.dart'
    as _i5;
import 'package:google_maps_flutter_web/google_maps_flutter_web.dart' as _i4;
import 'package:mockito/mockito.dart' as _i1;

// ignore_for_file: type=lint
// ignore_for_file: avoid_redundant_argument_values
// ignore_for_file: avoid_setters_without_getters
// ignore_for_file: comment_references
// ignore_for_file: implementation_imports
// ignore_for_file: invalid_use_of_visible_for_testing_member
// ignore_for_file: prefer_const_constructors
// ignore_for_file: unnecessary_parenthesis
// ignore_for_file: camel_case_types
// ignore_for_file: subtype_of_sealed_class

class _FakeGMap_0 extends _i1.SmartFake implements _i2.GMap {
  _FakeGMap_0(
    Object parent,
    Invocation parentInvocation,
  ) : super(
          parent,
          parentInvocation,
        );
}

class _FakeGeoposition_1 extends _i1.SmartFake implements _i3.Geoposition {
  _FakeGeoposition_1(
    Object parent,
    Invocation parentInvocation,
  ) : super(
          parent,
          parentInvocation,
        );
}

/// A class which mocks [CirclesController].
///
/// See the documentation for Mockito's code generation for more information.
class MockCirclesController extends _i1.Mock implements _i4.CirclesController {
  @override
  Map<_i5.CircleId, _i4.CircleController> get circles => (super.noSuchMethod(
        Invocation.getter(#circles),
        returnValue: <_i5.CircleId, _i4.CircleController>{},
        returnValueForMissingStub: <_i5.CircleId, _i4.CircleController>{},
      ) as Map<_i5.CircleId, _i4.CircleController>);
  @override
  _i2.GMap get googleMap => (super.noSuchMethod(
        Invocation.getter(#googleMap),
        returnValue: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
        returnValueForMissingStub: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
      ) as _i2.GMap);
  @override
  set googleMap(_i2.GMap? _googleMap) => super.noSuchMethod(
        Invocation.setter(
          #googleMap,
          _googleMap,
        ),
        returnValueForMissingStub: null,
      );
  @override
  int get mapId => (super.noSuchMethod(
        Invocation.getter(#mapId),
        returnValue: 0,
        returnValueForMissingStub: 0,
      ) as int);
  @override
  set mapId(int? _mapId) => super.noSuchMethod(
        Invocation.setter(
          #mapId,
          _mapId,
        ),
        returnValueForMissingStub: null,
      );
  @override
  void addCircles(Set<_i5.Circle>? circlesToAdd) => super.noSuchMethod(
        Invocation.method(
          #addCircles,
          [circlesToAdd],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void changeCircles(Set<_i5.Circle>? circlesToChange) => super.noSuchMethod(
        Invocation.method(
          #changeCircles,
          [circlesToChange],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void removeCircles(Set<_i5.CircleId>? circleIdsToRemove) =>
      super.noSuchMethod(
        Invocation.method(
          #removeCircles,
          [circleIdsToRemove],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void bindToMap(
    int? mapId,
    _i2.GMap? googleMap,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #bindToMap,
          [
            mapId,
            googleMap,
          ],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [PolygonsController].
///
/// See the documentation for Mockito's code generation for more information.
class MockPolygonsController extends _i1.Mock
    implements _i4.PolygonsController {
  @override
  Map<_i5.PolygonId, _i4.PolygonController> get polygons => (super.noSuchMethod(
        Invocation.getter(#polygons),
        returnValue: <_i5.PolygonId, _i4.PolygonController>{},
        returnValueForMissingStub: <_i5.PolygonId, _i4.PolygonController>{},
      ) as Map<_i5.PolygonId, _i4.PolygonController>);
  @override
  _i2.GMap get googleMap => (super.noSuchMethod(
        Invocation.getter(#googleMap),
        returnValue: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
        returnValueForMissingStub: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
      ) as _i2.GMap);
  @override
  set googleMap(_i2.GMap? _googleMap) => super.noSuchMethod(
        Invocation.setter(
          #googleMap,
          _googleMap,
        ),
        returnValueForMissingStub: null,
      );
  @override
  int get mapId => (super.noSuchMethod(
        Invocation.getter(#mapId),
        returnValue: 0,
        returnValueForMissingStub: 0,
      ) as int);
  @override
  set mapId(int? _mapId) => super.noSuchMethod(
        Invocation.setter(
          #mapId,
          _mapId,
        ),
        returnValueForMissingStub: null,
      );
  @override
  void addPolygons(Set<_i5.Polygon>? polygonsToAdd) => super.noSuchMethod(
        Invocation.method(
          #addPolygons,
          [polygonsToAdd],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void changePolygons(Set<_i5.Polygon>? polygonsToChange) => super.noSuchMethod(
        Invocation.method(
          #changePolygons,
          [polygonsToChange],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void removePolygons(Set<_i5.PolygonId>? polygonIdsToRemove) =>
      super.noSuchMethod(
        Invocation.method(
          #removePolygons,
          [polygonIdsToRemove],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void bindToMap(
    int? mapId,
    _i2.GMap? googleMap,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #bindToMap,
          [
            mapId,
            googleMap,
          ],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [PolylinesController].
///
/// See the documentation for Mockito's code generation for more information.
class MockPolylinesController extends _i1.Mock
    implements _i4.PolylinesController {
  @override
  Map<_i5.PolylineId, _i4.PolylineController> get lines => (super.noSuchMethod(
        Invocation.getter(#lines),
        returnValue: <_i5.PolylineId, _i4.PolylineController>{},
        returnValueForMissingStub: <_i5.PolylineId, _i4.PolylineController>{},
      ) as Map<_i5.PolylineId, _i4.PolylineController>);
  @override
  _i2.GMap get googleMap => (super.noSuchMethod(
        Invocation.getter(#googleMap),
        returnValue: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
        returnValueForMissingStub: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
      ) as _i2.GMap);
  @override
  set googleMap(_i2.GMap? _googleMap) => super.noSuchMethod(
        Invocation.setter(
          #googleMap,
          _googleMap,
        ),
        returnValueForMissingStub: null,
      );
  @override
  int get mapId => (super.noSuchMethod(
        Invocation.getter(#mapId),
        returnValue: 0,
        returnValueForMissingStub: 0,
      ) as int);
  @override
  set mapId(int? _mapId) => super.noSuchMethod(
        Invocation.setter(
          #mapId,
          _mapId,
        ),
        returnValueForMissingStub: null,
      );
  @override
  void addPolylines(Set<_i5.Polyline>? polylinesToAdd) => super.noSuchMethod(
        Invocation.method(
          #addPolylines,
          [polylinesToAdd],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void changePolylines(Set<_i5.Polyline>? polylinesToChange) =>
      super.noSuchMethod(
        Invocation.method(
          #changePolylines,
          [polylinesToChange],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void removePolylines(Set<_i5.PolylineId>? polylineIdsToRemove) =>
      super.noSuchMethod(
        Invocation.method(
          #removePolylines,
          [polylineIdsToRemove],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void bindToMap(
    int? mapId,
    _i2.GMap? googleMap,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #bindToMap,
          [
            mapId,
            googleMap,
          ],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [MarkersController].
///
/// See the documentation for Mockito's code generation for more information.
class MockMarkersController extends _i1.Mock implements _i4.MarkersController {
  @override
  Map<_i5.MarkerId, _i4.MarkerController> get markers => (super.noSuchMethod(
        Invocation.getter(#markers),
        returnValue: <_i5.MarkerId, _i4.MarkerController>{},
        returnValueForMissingStub: <_i5.MarkerId, _i4.MarkerController>{},
      ) as Map<_i5.MarkerId, _i4.MarkerController>);
  @override
  _i2.GMap get googleMap => (super.noSuchMethod(
        Invocation.getter(#googleMap),
        returnValue: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
        returnValueForMissingStub: _FakeGMap_0(
          this,
          Invocation.getter(#googleMap),
        ),
      ) as _i2.GMap);
  @override
  set googleMap(_i2.GMap? _googleMap) => super.noSuchMethod(
        Invocation.setter(
          #googleMap,
          _googleMap,
        ),
        returnValueForMissingStub: null,
      );
  @override
  int get mapId => (super.noSuchMethod(
        Invocation.getter(#mapId),
        returnValue: 0,
        returnValueForMissingStub: 0,
      ) as int);
  @override
  set mapId(int? _mapId) => super.noSuchMethod(
        Invocation.setter(
          #mapId,
          _mapId,
        ),
        returnValueForMissingStub: null,
      );
  @override
  void addMarkers(Set<_i5.Marker>? markersToAdd) => super.noSuchMethod(
        Invocation.method(
          #addMarkers,
          [markersToAdd],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void changeMarkers(Set<_i5.Marker>? markersToChange) => super.noSuchMethod(
        Invocation.method(
          #changeMarkers,
          [markersToChange],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void removeMarkers(Set<_i5.MarkerId>? markerIdsToRemove) =>
      super.noSuchMethod(
        Invocation.method(
          #removeMarkers,
          [markerIdsToRemove],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void showMarkerInfoWindow(_i5.MarkerId? markerId) => super.noSuchMethod(
        Invocation.method(
          #showMarkerInfoWindow,
          [markerId],
        ),
        returnValueForMissingStub: null,
      );
  @override
  void hideMarkerInfoWindow(_i5.MarkerId? markerId) => super.noSuchMethod(
        Invocation.method(
          #hideMarkerInfoWindow,
          [markerId],
        ),
        returnValueForMissingStub: null,
      );
  @override
  bool isInfoWindowShown(_i5.MarkerId? markerId) => (super.noSuchMethod(
        Invocation.method(
          #isInfoWindowShown,
          [markerId],
        ),
        returnValue: false,
        returnValueForMissingStub: false,
      ) as bool);
  @override
  void bindToMap(
    int? mapId,
    _i2.GMap? googleMap,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #bindToMap,
          [
            mapId,
            googleMap,
          ],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [Geolocation].
///
/// See the documentation for Mockito's code generation for more information.
class MockGeolocation extends _i1.Mock implements _i3.Geolocation {
  @override
  _i6.Future<_i3.Geoposition> getCurrentPosition({
    bool? enableHighAccuracy,
    Duration? timeout,
    Duration? maximumAge,
  }) =>
      (super.noSuchMethod(
        Invocation.method(
          #getCurrentPosition,
          [],
          {
            #enableHighAccuracy: enableHighAccuracy,
            #timeout: timeout,
            #maximumAge: maximumAge,
          },
        ),
        returnValue: _i6.Future<_i3.Geoposition>.value(_FakeGeoposition_1(
          this,
          Invocation.method(
            #getCurrentPosition,
            [],
            {
              #enableHighAccuracy: enableHighAccuracy,
              #timeout: timeout,
              #maximumAge: maximumAge,
            },
          ),
        )),
        returnValueForMissingStub:
            _i6.Future<_i3.Geoposition>.value(_FakeGeoposition_1(
          this,
          Invocation.method(
            #getCurrentPosition,
            [],
            {
              #enableHighAccuracy: enableHighAccuracy,
              #timeout: timeout,
              #maximumAge: maximumAge,
            },
          ),
        )),
      ) as _i6.Future<_i3.Geoposition>);
  @override
  _i6.Stream<_i3.Geoposition> watchPosition({
    bool? enableHighAccuracy,
    Duration? timeout,
    Duration? maximumAge,
  }) =>
      (super.noSuchMethod(
        Invocation.method(
          #watchPosition,
          [],
          {
            #enableHighAccuracy: enableHighAccuracy,
            #timeout: timeout,
            #maximumAge: maximumAge,
          },
        ),
        returnValue: _i6.Stream<_i3.Geoposition>.empty(),
        returnValueForMissingStub: _i6.Stream<_i3.Geoposition>.empty(),
      ) as _i6.Stream<_i3.Geoposition>);
}

/// A class which mocks [Geoposition].
///
/// See the documentation for Mockito's code generation for more information.
class MockGeoposition extends _i1.Mock implements _i3.Geoposition {}

/// A class which mocks [Coordinates].
///
/// See the documentation for Mockito's code generation for more information.
class MockCoordinates extends _i1.Mock implements _i3.Coordinates {}
