package plugin.google.maps.data.geojson;

/**
 * Class used to apply styles for the
 * {@link plugin.google.maps.data.geojson.GeoJsonFeature GeoJsonFeature} objects
 */
interface GeoJsonStyle {

    /**
     * Gets the type of geometries this style can be applied to
     *
     * @return type of geometries this style can be applied to
     */
    public String[] getGeometryType();

    public boolean isVisible();

    public void setVisible(boolean visible);

}
